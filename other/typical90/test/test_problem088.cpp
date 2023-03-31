#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem088";
}

class Command2 {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n, q;
	vector<int> a, x, y;

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

			StdIn = to_string(n) + " " + to_string(q) + "\n";
			for (int i = 0; i < n; i++) {
				StdIn += (i ? " " : "") + to_string(a[i]);
			}
			StdIn += "\n";
			for (int i = 0; i < q; i++) {
				StdIn += to_string(x[i]) + " " + to_string(y[i]) + "\n";
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
		waitpid(pid, &status, 0);

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		istringstream out_input;
		array<char, 256> buffer;
		ssize_t bytes = 0;
		if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
			throw runtime_error(strerror(errno));
		}

		out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
		int nb, nc, b_sum = 0, c_sum = 0;
		set<int> b, c;
		out_input >> nb;
		EXPECT_TRUE(nb > 0);
		for (int i = 0; i < nb; i++) {
			int bi;
			out_input >> bi;
			EXPECT_EQ(b.end(), b.find(bi));
			b.insert(bi);
			b_sum += a[bi - 1];
		}
		out_input >> nc;
		EXPECT_TRUE(nc > 0);
		for (int i = 0; i < nc; i++) {
			int ci;
			out_input >> ci;
			EXPECT_EQ(c.end(), c.find(ci));
			c.insert(ci);
			c_sum += a[ci - 1];
		}
		EXPECT_NE(b, c);
		for (int i = 0; i < q; i++) {
			EXPECT_FALSE((b.end() != b.find(x[i])) && (b.end() != b.find(y[i])));
			EXPECT_FALSE((c.end() != c.find(x[i])) && (c.end() != c.find(y[i])));
		}
		EXPECT_EQ(b_sum, c_sum);

		do {
			bytes = read(errfd[READ_END], buffer.data(), buffer.size());
			StdErr.append(buffer.data(), bytes);
		} while (bytes > 0);

		cleanup();
	}
};

void check(int n, int q, vector<int> a, vector<int> x, vector<int> y) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.q = q;
	cmd.a = a;
	cmd.x = x;
	cmd.y = y;
	cmd.execute();
}

TEST(typical90_problem088, case1) {
	check(5, 2, vector<int> { 3, 1, 3, 2, 3 }, vector<int> { 1, 1 }, vector<int> { 2, 4 });
}

TEST(typical90_problem088, case2) {
	check(10, 10, vector<int> { 2, 5, 7, 8, 11, 10, 1, 88, 86, 50 }, vector<int> { 1, 1, 1, 1, 1, 5, 6, 2, 9, 7 },
			vector<int> { 2, 3, 4, 5, 6, 10, 10, 3, 10, 8 });
}
