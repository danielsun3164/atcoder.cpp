#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

class Command2 {
   public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n;
	vector<vector<int>> e;
	int expected;

	void execute() {
		const int READ_END = 0;
		const int WRITE_END = 1;

		int infd[2] = {0, 0};
		int outfd[2] = {0, 0};
		int errfd[2] = {0, 0};

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
		if (pid > 0) {				  // PARENT
			close(infd[READ_END]);	  // Parent does not read from stdin
			close(outfd[WRITE_END]);  // Parent does not write to stdout
			close(errfd[WRITE_END]);  // Parent does not write to stderr

			istringstream out_input;
			array<char, 256> buffer;
			ssize_t bytes = 0;
			StdIn = to_string(n) + "\n";
			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}
			int count = 0;
			while (true) {
				if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
					throw runtime_error(strerror(errno));
				}
				out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
				string result;
				out_input >> result;
				if ("?" == result) {
					int a, b;
					out_input >> a >> b;
					EXPECT_TRUE((a >= 1) && (a <= n));
					EXPECT_TRUE((b >= 1) && (b <= n));
					EXPECT_FALSE(a == b);
					a--;
					b--;
					StdIn = to_string(e[a][b]) + "\n";
					if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
						throw runtime_error(strerror(errno));
					}
					count++;
				} else if ("!" == result) {
					int d;
					out_input >> d;
					EXPECT_EQ(expected, d);
					break;
				} else {
					FAIL();
				}
			}
			EXPECT_TRUE(count <= 100);
			close(infd[WRITE_END]);	 // Done writing
		} else if (pid == 0) {		 // CHILD
			dup2(infd[READ_END], STDIN_FILENO);
			dup2(outfd[WRITE_END], STDOUT_FILENO);
			dup2(errfd[WRITE_END], STDERR_FILENO);

			close(infd[WRITE_END]);	 // Child does not write to stdin
			close(outfd[READ_END]);	 // Child does not read from stdout
			close(errfd[READ_END]);	 // Child does not read from stderr

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

void check(int n, vector<vector<int>> e, int expected) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.e = e;
	cmd.expected = expected;
	cmd.execute();
}

TEST(abc019_problemD, case1) {
	check(5,
		  vector<vector<int>>{
			  {0, 1, 4, 2, 5}, {1, 0, 3, 3, 4}, {4, 3, 0, 6, 7}, {2, 3, 6, 0, 7}, {5, 4, 7, 7, 0}},
		  7);
}
