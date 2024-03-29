#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

class Command2 {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n, m, k;
	vector<int> a, b;

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
		if (pid > 0) { // PARENT
			close(infd[READ_END]);	// Parent does not read from stdin
			close(outfd[WRITE_END]);  // Parent does not write to stdout
			close(errfd[WRITE_END]);  // Parent does not write to stderr

			StdIn = to_string(n) + " " + to_string(m) + " " + to_string(k) + "\n";
			for (int i = 0; i < m; i++) {
				StdIn += to_string(a[i]) + " " + to_string(b[i]) + "\n";
			}
			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}

			close(infd[WRITE_END]); // Done writing
		} else if (pid == 0) { // CHILD
			dup2(infd[READ_END], STDIN_FILENO);
			dup2(outfd[WRITE_END], STDOUT_FILENO);
			dup2(errfd[WRITE_END], STDERR_FILENO);

			close(infd[WRITE_END]); // Child does not write to stdin
			close(outfd[READ_END]); // Child does not read from stdout
			close(errfd[READ_END]); // Child does not read from stderr

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
		while (k--) {
			vector<int> p(n), idx(n + 1);
			set<int> st;
			for (int i = 0; i < n; i++) {
				output_ss >> p[i];
				EXPECT_TRUE((p[i] >= 1) && (p[i] <= n));
				EXPECT_EQ(st.end(), st.find(p[i]));
				st.insert(p[i]);
				if (!((p[i] >= 1) && (p[i] <= n))) {
					cout << "Invalid input " << p[i] << endl;
				}
				idx[p[i]] = i;
			}
			for (int i = 0; i < m; i++) {
				EXPECT_TRUE(idx[a[i]] < idx[b[i]]);
			}
		}

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n, int m, int k, vector<int> a, vector<int> b) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.m = m;
	cmd.k = k;
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
		int n, m, k;
		input_ss >> n >> m >> k;
		vector<int> a(m), b(m);
		for (int i = 0; i < m; i++) {
			input_ss >> a[i] >> b[i];
		}
		check(n, m, k, a, b);
	}
}

static_block
{
	COMMAND = "problem071";
	EXTERNAL = "typical90/071";
	FUNC = &my_check;
}

TEST(typical90_problem071, case1) {
	check(5, 2, 3, vector<int> { 1, 3 }, vector<int> { 2, 4 });
}

TEST(typical90_problem071, case2) {
	check(string("") + "5 2 1\n" + "1 3\n" + "3 1", string("") + "-1");
}

TEST(typical90_problem071, case3) {
	check(10, 15, 10, vector<int> { 8, 9, 10, 6, 10, 1, 7, 6, 8, 5, 10, 3, 8, 3, 2 }, vector<int> { 4, 4, 2, 2, 6, 3, 4,
			8, 1, 6, 9, 7, 3, 9, 3 });
}
