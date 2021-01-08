#ifndef COMMAND_H_
#define COMMAND_H_

#include <gtest/gtest.h>
#include <sys/wait.h>
#include <unistd.h>
#include <array>
#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

class Command {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;

	void execute() {
		const int READ_END = 0;
		const int WRITE_END = 1;

		int infd[2] = { 0, 0 };
		int outfd[2] = { 0, 0 };
		int errfd[2] = { 0, 0 };

		auto cleanup = [&]() {
			::close(infd[READ_END]);
			::close(infd[WRITE_END]);

			::close(outfd[READ_END]);
			::close(outfd[WRITE_END]);

			::close(errfd[READ_END]);
			::close(errfd[WRITE_END]);
		};

		auto rc = ::pipe(infd);
		if (rc < 0) {
			throw runtime_error(strerror(errno));
		}

		rc = ::pipe(outfd);
		if (rc < 0) {
			::close(infd[READ_END]);
			::close(infd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		rc = ::pipe(errfd);
		if (rc < 0) {
			::close(infd[READ_END]);
			::close(infd[WRITE_END]);

			::close(outfd[READ_END]);
			::close(outfd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		auto pid = fork();
		if (pid > 0) { // PARENT
			::close(infd[READ_END]);	// Parent does not read from stdin
			::close(outfd[WRITE_END]);  // Parent does not write to stdout
			::close(errfd[WRITE_END]);  // Parent does not write to stderr

			if (::write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}
			::close(infd[WRITE_END]); // Done writing
		} else if (pid == 0) // CHILD
				{
			::dup2(infd[READ_END], STDIN_FILENO);
			::dup2(outfd[WRITE_END], STDOUT_FILENO);
			::dup2(errfd[WRITE_END], STDERR_FILENO);

			::close(infd[WRITE_END]);   // Child does not write to stdin
			::close(outfd[READ_END]);   // Child does not read from stdout
			::close(errfd[READ_END]);   // Child does not read from stderr

			::execl("/bin/bash", "bash", "-c", Command.c_str(), nullptr);
			::exit(EXIT_SUCCESS);
		}

		// PARENT
		if (pid < 0) {
			cleanup();
			throw runtime_error("Failed to fork");
		}

		int status = 0;
		::waitpid(pid, &status, 0);

		array<char, 256> buffer;

		ssize_t bytes = 0;
		do {
			bytes = ::read(outfd[READ_END], buffer.data(), buffer.size());
			StdOut.append(buffer.data(), bytes);
		} while (bytes > 0);

		do {
			bytes = ::read(errfd[READ_END], buffer.data(), buffer.size());
			StdErr.append(buffer.data(), bytes);
		} while (bytes > 0);

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		cleanup();
	}
};

void check(string command, string input, string output) {
	Command cmd;
	cmd.Command = command;
	cmd.StdIn = input + "\n";
	cmd.execute();
	EXPECT_EQ(output + "\n", cmd.StdOut);
}

template<typename ... Args>
void check(string command, string input, const Args ... args) {
	Command cmd;
	cmd.Command = command;
	cmd.StdIn = input + "\n";
	cmd.execute();
	vector<string> outputs = { args... };
	for (long unsigned int i = 0; i < outputs.size(); i++) {
		outputs[i].append("\n");
	}
	EXPECT_TRUE(find(outputs.begin(), outputs.end(), cmd.StdOut) != outputs.end());
	if (outputs.end() == find(outputs.begin(), outputs.end(), cmd.StdOut)) {
		cout << "Actual:" << endl;
		cout << cmd.StdOut << endl;
		cout << "Expected:" << endl;
		for (string s : outputs) {
			cout << s << endl;
		}
	}
}

#endif  // COMMAND_H_
