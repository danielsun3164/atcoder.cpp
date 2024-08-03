#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

class Command2 {
   public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int h, w, a, b;

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

			StdIn =
				to_string(h) + " " + to_string(w) + " " + to_string(a) + " " + to_string(b) + "\n";
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
		int lineNo = 0;
		for (int i = 0; i < int(StdOut.size()); i++) {
			if ('\n' == StdOut[i]) {
				lineNo++;
			}
		}
		EXPECT_EQ(h * w, lineNo);
		istringstream output_ss(StdOut);
		int px = 0, py = 0;
		vector<vector<bool>> visited(h, vector<bool>(w, false));
		for (int i = 0; i < h * w; i++) {
			int x, y;
			output_ss >> x >> y;
			EXPECT_FALSE(visited[x - 1][y - 1]);
			visited[x - 1][y - 1] = true;
			if (0 == i) {
				EXPECT_EQ(1, x);
				EXPECT_EQ(1, y);
			} else {
				EXPECT_TRUE(abs(x - px) <= 1);
				EXPECT_TRUE(abs(y - py) <= 1);
			}
			if (h * w - 1 == i) {
				EXPECT_EQ(a, x);
				EXPECT_EQ(b, y);
			}
			px = x;
			py = y;
		}

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int h, int w, int a, int b) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.h = h;
	cmd.w = w;
	cmd.a = a;
	cmd.b = b;
	cmd.execute();
}

void my_check(string input, string expected) {
	ignore = expected;
	istringstream input_ss(input);
	int h, w, a, b;
	input_ss >> h >> w >> a >> b;
	check(h, w, a, b);
}

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc232/H";
	FUNC = &my_check;
}

TEST(abc232_problemH, case1) {
	check(3, 2, 3, 2);
}
