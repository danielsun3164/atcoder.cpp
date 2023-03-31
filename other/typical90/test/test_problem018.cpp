#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem018";
}

const static double TOLERANCE = 1E-7;

class Command2 {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	string input;
	int q;
	vector<int> e;
	vector<double> expected;

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

			istringstream out_input;
			array<char, 256> buffer;
			ssize_t bytes = 0;
			StdIn = input + "\n" + to_string(q) + "\n";
			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}

			for (int i = 0; i < q; i++) {
				StdIn = to_string(e[i]) + "\n";
				if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
					throw runtime_error(strerror(errno));
				}

				if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
					throw runtime_error(strerror(errno));
				}
				out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
				double output;
				out_input >> output;
				EXPECT_TRUE(abs(output - expected[i]) < TOLERANCE);
				if (abs(output - expected[i]) >= TOLERANCE) {
					cout << "Actual:" << endl;
					cout << fixed << setprecision(10) << output << endl;
					cout << "Expected:" << endl;
					cout << fixed << setprecision(10) << expected[i] << endl;
				}
			}
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
		waitpid(pid, &status, 0);

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		array<char, 256> buffer;
		ssize_t bytes = 0;
		do {
			bytes = read(errfd[READ_END], buffer.data(), buffer.size());
			StdErr.append(buffer.data(), bytes);
		} while (bytes > 0);

		cleanup();
	}
};

void check(string input, int q, vector<int> e, vector<double> expected) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.input = input;
	cmd.q = q;
	cmd.e = e;
	cmd.expected = expected;
	cmd.execute();
}

TEST(typical90_problem018, case1) {
	check(string("") + "4\n" + "2 1 1", 4, vector<int> { 0, 1, 2, 3 }, vector<double> { 0.000000000000, 24.094842552111,
			54.735610317245, 45.000000000000 });
}

TEST(typical90_problem018, case2) {
	check(string("") + "5121\n" + "312000000 4123 3314", 6, vector<int> { 123, 12, 445, 4114, 42, 1233 },
			vector<double> { 4.322765775902, 0.421184234768, 15.640867693969, 35.396039162484, 1.475665637902,
					43.338582976959 });
}
