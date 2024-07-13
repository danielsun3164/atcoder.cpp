#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

const static int N = 3;

class Command2 {
   public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	vector<vector<int>> a;

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
		// 出力が多いとフリーズしてしまう問題対応
		// 事前に sysctl fs.pipe-max-size=4194304 を設定する必要があり
		fcntl(outfd[WRITE_END], F_SETPIPE_SZ, PIPE_SIZE);

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

			StdIn = "";
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					StdIn += ((j) ? " " : "") + to_string(a[i][j]);
				}
				StdIn += "\n";
			}
			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}

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
		while ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdOut.append(buffer.data(), bytes);
		}
		istringstream output_ss(StdOut);
		string result;
		output_ss >> result;
		int x = 0, y = 0;
		for (char c : result) {
			EXPECT_TRUE(a[x][y] > 0);
			a[x][y]--;
			switch (c) {
				case 'L':
					EXPECT_TRUE(y > 0);
					y--;
					break;
				case 'R':
					EXPECT_TRUE(y < N - 1);
					y++;
					break;
				case 'U':
					EXPECT_TRUE(x > 0);
					x--;
					break;
				default:
					EXPECT_TRUE(x < N - 1);
					x++;
					break;
			}
		}
		EXPECT_EQ(0, x);
		EXPECT_EQ(0, y);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				EXPECT_EQ(0, a[i][j]);
			}
		}

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(vector<vector<int>> a) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.a = a;
	cmd.execute();
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if ("NO" == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		vector<vector<int>> a(N, vector<int>(N));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				input_ss >> a[i][j];
			}
		}
		check(a);
	}
}

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc227/H";
	FUNC = &my_check;
}

TEST(abc227_problemH, case1) {
	check(vector<vector<int>>{{1, 1, 1}, {1, 1, 1}, {1, 2, 1}});
}

TEST(abc227_problemH, case2) {
	check(string("") + "2 4 2\n" + "2 1 1\n" + "1 1 2", string("") + "NO");
}

TEST(abc227_problemH, case3) {
	check(vector<vector<int>>{{2, 2, 3}, {2, 1, 2}, {1, 3, 2}});
}
