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
	int n;
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

			StdIn = to_string(n) + "\n";
			for (int i = 0; i < n - 1; i++) {
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
		vector<set<int>> edges(n + 1);
		for (int i = 0; i < n - 1; i++) {
			edges[a[i]].insert(b[i]);
			edges[b[i]].insert(a[i]);
		}
		vector<int> c(n >> 1);
		for (int i = 0; i < (n >> 1); i++) {
			output_ss >> c[i];
			EXPECT_TRUE((c[i] >= 1) && (c[i] <= n));
			if (!((c[i] >= 1) && (c[i] <= n))) {
				cout << "Invalid input " << c[i] << endl;
			}
			for (int j = 0; j < i; j++) {
				EXPECT_EQ(edges[c[j]].end(), edges[c[j]].find(c[i]));
				if (edges[c[j]].end() != edges[c[j]].find(c[i])) {
					cout << c[j] << " connect with " << c[i] << endl;
				}
			}
		}

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n, vector<int> a, vector<int> b) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.a = a;
	cmd.b = b;
	cmd.execute();
}

void my_check(string input, __attribute__((unused))        string expected) {
	istringstream input_ss(input);
	int n;
	input_ss >> n;
	vector<int> a(n - 1), b(n - 1);
	for (int i = 0; i < n - 1; i++) {
		input_ss >> a[i] >> b[i];
	}
}

static_block
{
	COMMAND = "problem026";
	EXTERNAL = "typical90/026";
	FUNC = &my_check;
}

TEST(typical90_problem026, case1) {
	check(4, vector<int> { 1, 2, 2 }, vector<int> { 2, 3, 4 });
}

TEST(typical90_problem026, case2) {
	check(6, vector<int> { 1, 2, 3, 2, 3 }, vector<int> { 3, 4, 5, 5, 6 });
}
