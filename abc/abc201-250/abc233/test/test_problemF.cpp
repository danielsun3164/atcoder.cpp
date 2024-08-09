#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void print(vector<int> &p) {
	for (int pi : p) {
		cout << pi << ",";
	}
	cout << endl;
}

class Command2 {
   public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n, m;
	vector<int> p, a, b;

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

			StdIn = to_string(n) + "\n";
			for (int i = 0; i < n; i++) {
				StdIn += ((i) ? " " : "") + to_string(p[i]);
			}
			StdIn += "\n" + to_string(m) + "\n";
			for (int i = 0; i < m; i++) {
				StdIn += to_string(a[i]) + " " + to_string(b[i]) + "\n";
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
		int k;
		output_ss >> k;
		EXPECT_TRUE(k >= 0);
		vector<int> expected(n);
		iota(expected.begin(), expected.end(), 1);
		for (int i = 0; i < k; i++) {
			int c;
			output_ss >> c;
			EXPECT_TRUE((1 <= c) && (c <= m));
			c--;
			swap(p[a[c] - 1], p[b[c] - 1]);
		}
		EXPECT_EQ(expected, p);

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n, vector<int> p, int m, vector<int> a, vector<int> b) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.p = p;
	cmd.m = m;
	cmd.a = a;
	cmd.b = b;
	cmd.execute();
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result;
	expected_ss >> result;
	if (-1 == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n;
		input_ss >> n;
		vector<int> p(n);
		for (int &pi : p) {
			input_ss >> pi;
		}
		int m;
		input_ss >> m;
		vector<int> a(m), b(m);
		for (int i = 0; i < m; i++) {
			input_ss >> a[i] >> b[i];
		}
		check(n, p, m, a, b);
	}
}

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc233/F";
	FUNC = &my_check;
}

TEST(abc233_problemF, case1) {
	check(6, vector<int>{5, 3, 2, 4, 6, 1}, 4, vector<int>{1, 5, 1, 2}, vector<int>{5, 6, 2, 3});
}

TEST(abc233_problemF, case2) {
	check(string("") + "5\n" + "3 4 1 2 5\n" + "2\n" + "1 3\n" + "2 5", string("") + "-1");
}

TEST(abc233_problemF, case3) {
	check(4, vector<int>{1, 2, 3, 4}, 6, vector<int>{1, 1, 1, 2, 2, 3},
		  vector<int>{2, 3, 4, 3, 4, 4});
}
