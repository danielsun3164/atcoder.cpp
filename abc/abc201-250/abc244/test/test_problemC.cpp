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
	int n;
	set<int> st;

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

			for (int i = 1; i <= (2 * n) + 1; i++) {
				st.insert(i);
			}
			istringstream out_input;
			array<char, 256> buffer;
			ssize_t bytes = 0;
			StdIn = to_string(n) + "\n";
			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}
			while (true) {
				if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
					throw runtime_error(strerror(errno));
				}
				out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
				int result;
				out_input >> result;
				// cout << "result=" << result << endl;
				auto it = st.find(result);
				EXPECT_TRUE(it != st.end());
				st.erase(it);

				if (st.empty()) {
					StdIn = "0\n";
					// cout << "output=" << 0 << endl;
					break;
				} else {
					StdIn = to_string(*st.begin()) + "\n";
					// cout << "output=" << *st.begin() << endl;
					st.erase(st.begin());
				}
				if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
					throw runtime_error(strerror(errno));
				}
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
		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.execute();
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int n;
	input_ss >> n;
	check(n);
}

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc244/C";
	FUNC = &my_check;
}

TEST(abc244_problemC, case1) {
	check(2);
}
