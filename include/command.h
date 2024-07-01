#ifndef COMMAND_H_
#define COMMAND_H_

#include <bits/stdc++.h>
#include <fcntl.h>
#include <gtest/gtest.h>
#include <zipper/unzipper.h>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/replace.hpp>
#include "static_block.hpp"

using namespace std;
using namespace zipper;
namespace fs = std::filesystem;

const static char SLASH = '/';
const static string IN_NAME = "in";
const static string OUT_NAME = "out";
const static int PIPE_SIZE = 8'388'608;
const static int DOUBLE_DIGITS = 50;

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
		// 事前に sysctl fs.pipe-max-size=8388608 を設定する必要があり
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

			if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
				throw runtime_error(strerror(errno));
			}
			close(infd[WRITE_END]);	 // Done writing
		} else if (pid == 0) {		 // CHILD
			close(infd[WRITE_END]);	 // Child does not write to stdin
			close(outfd[READ_END]);	 // Child does not read from stdout
			close(errfd[READ_END]);	 // Child does not read from stderr

			dup2(infd[READ_END], STDIN_FILENO);
			dup2(outfd[WRITE_END], STDOUT_FILENO);
			dup2(errfd[WRITE_END], STDERR_FILENO);

			execl("/bin/bash", "bash", "-c", Command.c_str(), nullptr);
			close(infd[READ_END]);
			close(outfd[WRITE_END]);
			close(errfd[WRITE_END]);
			exit(EXIT_SUCCESS);
		}

		// PARENT
		if (pid < 0) {
			cleanup();
			throw runtime_error("Failed to fork");
		}

		int status = 0;
		waitpid(pid, &status, WNOHANG);

		array<char, 256> buffer;
		ssize_t bytes = 0;
		while ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) >
			   0) {
			StdOut.append(buffer.data(), bytes);
		}

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) >
			   0) {
			StdErr.append(buffer.data(), bytes);
		}

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		cleanup();
	}
};

static string COMMAND, EXTERNAL;
static double TOLERANCE;
string PATH;

Command execute(string input) {
	Command cmd;
	cmd.Command = PATH + COMMAND;
	cmd.StdIn = input;
	cmd.execute();
	return cmd;
}

void check(string input, string expected) {
	Command cmd = execute(input + "\n");
	EXPECT_EQ(expected + "\n", cmd.StdOut);
}

template <typename... Args>
void check(string input, Args... args) {
	Command cmd = execute(input + "\n");
	vector<string> outputs = {args...};
	for (int i = 0; i < int(outputs.size()); i++) {
		outputs[i].append("\n");
	}
	EXPECT_TRUE(find(outputs.begin(), outputs.end(), cmd.StdOut) !=
				outputs.end());
	if (outputs.end() == find(outputs.begin(), outputs.end(), cmd.StdOut)) {
		cout << "Actual:" << endl;
		cout << cmd.StdOut << endl;
		cout << "Expected:" << endl;
		for (string s : outputs) {
			cout << s << endl;
		}
	}
}

void check_about(string input, double expected) {
	EXPECT_TRUE(TOLERANCE > 0.0);
	double tolerance = TOLERANCE,
		   max_value = TOLERANCE * pow(2.0, DOUBLE_DIGITS);
	while (max_value < expected) {
		max_value *= 2.0;
		tolerance *= 2.0;
	}
	Command cmd = execute(input + "\n");
	istringstream output_ss(cmd.StdOut);
	double output;
	output_ss >> output;
	EXPECT_TRUE(abs(output - expected) < tolerance);
	if (abs(output - expected) >= tolerance) {
		cout << "Actual:" << endl;
		cout << fixed << setprecision(10) << output << endl;
		cout << "Expected:" << endl;
		cout << fixed << setprecision(10) << expected << endl;
		cout << "TOLERANCE" << endl;
		cout << defaultfloat << tolerance << endl;
	}
}

void check_empty(string input) {
	Command cmd = execute(input + "\n");
	EXPECT_EQ("", cmd.StdOut);
}

void check_from_file(string input, string expected) {
	if (TOLERANCE > 0.0) {
		istringstream expected_ss(expected);
		double expected_value;
		expected_ss >> expected_value;
		check_about(input, expected_value);
	} else {
		Command cmd = execute(input);
		string::size_type pos = -1;
		while (string::npos != (pos = expected.find("\r\n"))) {
			expected.replace(pos, 2, "\n");
		}
		EXPECT_EQ(expected, cmd.StdOut);
	}
}

void check_stream(istream &input_stream, istream &output_stream) {
	string buf, input;
	while (getline(input_stream, buf)) {
		input += buf + "\n";
	}
	string output;
	while (getline(output_stream, buf)) {
		output += buf + "\n";
	}
	check_from_file(input, output);
}

void check_file(string input_file, string output_file) {
	ifstream input_fs(input_file);
	if (input_fs.fail()) {
		cout << "Cannot open file " << input_file << endl;
		FAIL();
	}
	ifstream output_fs(output_file);
	if (output_fs.fail()) {
		cout << "Cannot open file " << output_file << endl;
		FAIL();
	}
	check_stream(input_fs, output_fs);
	input_fs.close();
	output_fs.close();
}

class MyTest : public testing::Test {
   public:
	MyTest(string input, string output, void (*func)(string, string))
		: input_(input), output_(output), func_(func) {}
	void TestBody() override {
		func_(input_, output_);
	}

   private:
	string input_, output_;
	void (*func_)(string, string);
};

bool starts_with(string &s, string prefix) {
	return (s.size() < prefix.size())
			   ? false
			   : equal(begin(prefix), end(prefix), begin(s));
}

__attribute__((unused)) static void (*FUNC)(string, string) = &check_from_file;
#ifdef DATA_DIR
void registerMyTests() {
	string data_folder = DATA_DIR;
	fs::path pth(data_folder);
	if (!data_folder.empty() && fs::exists(pth) && is_directory(pth)) {
		int cnt = count(EXTERNAL.begin(), EXTERNAL.end(), SLASH);
		if (cnt > 0) {
			fs::path current_pth(PATH);
			string crrnt_path = canonical(current_pth).string();
			size_t index = crrnt_path.find_last_of(SLASH);
			string testname =
				crrnt_path.substr(index + 1, crrnt_path.length() - 1 - index);
			string folder, filename, path = "";
			index = EXTERNAL.find_last_of(SLASH);
			folder = EXTERNAL.substr(index + 1);
			if (1 == cnt) {
				filename =
					EXTERNAL.substr(0, EXTERNAL.find_last_of(SLASH, index));
			} else {
				size_t index2 = index;
				index = EXTERNAL.find_last_of(SLASH, index2 - 1);
				filename = EXTERNAL.substr(index, index2 - index - 1);
				path = EXTERNAL.substr(0, index);
			}
			if (!path.empty()) {
				pth = fs::path(folder + SLASH + path);
			}
			fs::directory_entry zip_file;
			for (fs::directory_entry entry : fs::directory_iterator(pth)) {
				if (boost::iequals(entry.path().filename().string(),
								   filename + ".zip")) {
					zip_file = entry;
					break;
				}
			}
			// Zipファイルが見つかった場合
			if (!zip_file.path().empty()) {
				Unzipper unzipper = Unzipper(zip_file.path().string());
				vector<ZipEntry> entries = unzipper.entries();
				set<string> st;
				// ファイル名とZipEntryのマップを作成
				for (ZipEntry entry : entries) {
					if ((SLASH != entry.name.back()) &&
						starts_with(entry.name, folder + SLASH)) {
						st.insert(entry.name);
					}
				}
				for (string in_path : st) {
					string out_path = in_path;
					boost::replace_all(out_path, SLASH + IN_NAME + SLASH,
									   SLASH + OUT_NAME + SLASH);
					boost::replace_all(out_path, "." + IN_NAME, "." + OUT_NAME);
					if (starts_with(in_path,
									folder + SLASH + IN_NAME + SLASH) &&
						(st.end() != st.find(out_path))) {
						string casename =
							in_path.substr(in_path.find_last_of(SLASH) + 1);
						boost::replace_all(casename, "." + IN_NAME,
										   "." + OUT_NAME);
						ostringstream input, output;
						unzipper.extractEntryToStream(in_path, input);
						unzipper.extractEntryToStream(out_path, output);
						string input_str = input.str(),
							   output_str = output.str();
						testing::RegisterTest(
							(testname + "_" + COMMAND + "_external").c_str(),
							casename.c_str(), nullptr, input_str.c_str(),
							__FILE__, __LINE__, [=]() -> MyTest * {
								return new MyTest(input_str, output_str, FUNC);
							});
					}
				}
			}
		}
	}
}

#endif	// DATA_DIR

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	string s(argv[0]);
	PATH = s.substr(0, s.find_last_of(SLASH)) + SLASH;
#ifdef DATA_DIR
	if (!EXTERNAL.empty()) {
		registerMyTests();
	}
#endif

	return RUN_ALL_TESTS();
}

#endif	// COMMAND_H_
