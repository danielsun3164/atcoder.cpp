#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

const char QUESTION = '?';
const char ANSWER = '!';

class Command2 {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n, q;
	string expected;

	void execute() {
		const int READ_END = 0;
		const int WRITE_END = 1;

		int infd[2] = { 0, 0 };
		int outfd[2] = { 0, 0 };
		int errfd[2] = { 0, 0 };

		auto cleanup = [&]() {
			close(infd[READ_END]);
			close(infd[WRITE_END]);

			close(outfd[READ_END]);
			close(outfd[WRITE_END]);

			close(errfd[READ_END]);
			close(errfd[WRITE_END]);
		};

		auto rc = pipe(infd);
		if (rc < 0) {
			throw runtime_error(strerror(errno));
		}

		rc = pipe(outfd);
		if (rc < 0) {
			close(infd[READ_END]);
			close(infd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		rc = pipe(errfd);
		if (rc < 0) {
			close(infd[READ_END]);
			close(infd[WRITE_END]);

			close(outfd[READ_END]);
			close(outfd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		auto pid = fork();
		if (pid > 0) { // PARENT
			close(infd[READ_END]);	// Parent does not read from stdin
			close(outfd[WRITE_END]);  // Parent does not write to stdout
			close(errfd[WRITE_END]);  // Parent does not write to stderr

			int count = 0;
			istringstream out_input;
			array<char, 256> buffer;
			ssize_t bytes = 0;
			StdIn = to_string(n) + " " + to_string(q) + "\n";

			while (true) {
				if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
					throw runtime_error(strerror(errno));
				}

				if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
					throw runtime_error(strerror(errno));
				}
				out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
				char mark;
				out_input >> mark;
				if (QUESTION == mark) {
					char c1, c2;
					out_input >> c1 >> c2;
					auto c1_index = find(expected.begin(), expected.end(), c1);
					auto c2_index = find(expected.begin(), expected.end(), c2);
					ASSERT_NE(expected.end(), c1_index);
					ASSERT_NE(expected.end(), c2_index);
					StdIn = (c1_index > c2_index) ? ">\n" : "<\n";
					count++;
				} else if (ANSWER == mark) {
					string answer;
					out_input >> answer;
					ASSERT_EQ(expected, answer);
					break;
				} else {
					cout << "mark=" << mark << endl;
					FAIL();
				}
			}
			ASSERT_LE(count, q);
			close(infd[WRITE_END]); // Done writing
		} else if (pid == 0) { // CHILD
			dup2(infd[READ_END], STDIN_FILENO);
			dup2(outfd[WRITE_END], STDOUT_FILENO);
			dup2(errfd[WRITE_END], STDERR_FILENO);

			close(infd[WRITE_END]);   // Child does not write to stdin
			close(outfd[READ_END]);   // Child does not read from stdout
			close(errfd[READ_END]);   // Child does not read from stderr

			execl("/bin/bash", "bash", "-c", Command.c_str(), nullptr);
			exit(EXIT_SUCCESS);
		}

		// PARENT
		if (pid < 0) {
			cleanup();
			throw runtime_error("Failed to fork");
		}

		int status = 0;
		waitpid(pid, &status, WNOHANG);

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		array<char, 256> buffer;
		ssize_t bytes = 0;
		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n, int q, string expected) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.q = q;
	cmd.expected = expected;
	cmd.execute();
}

TEST(practice_problemB, case1) {
	check(5, 7, "ADCBE");
}

TEST(practice_problemB, case2) {
	check(5, 7, "AEDBC");
}

TEST(practice_problemB, case3) {
	check(26, 100, "TXGQNUJPWFRMVOZHKIAYLCBSDE");
}

TEST(practice_problemB, case4) {
	check(26, 100, "CSBNGZXDRJMLOFQAWTYUIEPHKV");
}
