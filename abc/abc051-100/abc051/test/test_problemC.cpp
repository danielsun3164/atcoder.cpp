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
	int sx, sy, tx, ty;

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

			StdIn = to_string(sx) + " " + to_string(sy) + " " + to_string(tx) + " " +
					to_string(ty) + "\n";
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
		int x = sx, y = sy;
		string s;
		output_ss >> s;
		map<pair<int, int>, int> mp;
		// cout << "x=" << x << ", y=" << y << endl;
		for (int i = 0; i < int(s.size()); i++) {
			if ('U' == s[i]) {
				y++;
			} else if ('D' == s[i]) {
				y--;
			} else if ('L' == s[i]) {
				x--;
			} else {
				x++;
			}
			// cout << "x=" << x << ", y=" << y << endl;
			pair<int, int> key = {x, y};
			mp[key]++;
			if (!((x == sx) && (y == sy)) && !((x == tx) && (y == ty))) {
				EXPECT_EQ(1, mp[key]);
			}
		}
		EXPECT_EQ(sx, x);
		EXPECT_EQ(sy, y);
		EXPECT_EQ(2, mp[make_pair(sx, sy)]);
		EXPECT_EQ(2, mp[make_pair(tx, ty)]);

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int sx, int sy, int tx, int ty) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.sx = sx;
	cmd.sy = sy;
	cmd.tx = tx;
	cmd.ty = ty;
	cmd.execute();
}

void my_check(string input, string expected) {
	ignore = expected;
	istringstream input_ss(input);
	int sx, sy, tx, ty;
	input_ss >> sx >> sy >> tx >> ty;
	check(sx, sy, tx, ty);
}

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC051/C";
	FUNC = &my_check;
}

TEST(abc051_problemC, case1) {
	check(0, 0, 1, 2);
}

TEST(abc051_problemC, case2) {
	check(-2, -2, 1, 1);
}

TEST(abc051_problemC, case3) {
	check(0, 1, 0, 2);
}

TEST(abc051_problemC, case4) {
	check(0, 1, 1, 1);
}
