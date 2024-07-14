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
	string s;

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

			StdIn = s + "\n";
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
		int a, b, n = s.size();
		output_ss >> a >> b;
		EXPECT_TRUE((a >= 1) && (a <= n));
		EXPECT_TRUE((b >= 1) && (b <= n));
		EXPECT_TRUE(a < b);
		map<char, int> mp;
		for (int i = a - 1; i <= b - 1; i++) {
			mp[s[i]]++;
		}
		int count = 0;
		for (auto [c, i] : mp) {
			count = max(count, i);
		}
		EXPECT_TRUE(count > (b - a + 1) >> 1);

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(string s) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.s = s;
	cmd.execute();
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result1, result2;
	expected_ss >> result1 >> result2;
	if ((-1 == result1) && (-1 == result2)) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		string s;
		input_ss >> s;
		check(s);
	}
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC059_ABC043/D";
	FUNC = &my_check;
}

TEST(abc043_problemD, case1) {
	check(string("") + "needed", string("") + "2 3");
}

TEST(abc043_problemD, case2) {
	check(string("") + "atcoder", string("") + "-1 -1");
}
