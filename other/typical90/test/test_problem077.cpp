#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;
using ll = long long;

static const vector<int> DX{0, 1, 1, 0, -1, -1, -1, 0, 1};
static const vector<int> DY{0, 0, 1, 1, 1, 0, -1, -1, -1};

class Command2 {
   public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	int n;
	ll t;
	vector<ll> ax, ay, bx, by;

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

			StdIn = to_string(n) + " " + to_string(t) + "\n";
			for (int i = 0; i < n; i++) {
				StdIn += to_string(ax[i]) + " " + to_string(ay[i]) + "\n";
			}
			for (int i = 0; i < n; i++) {
				StdIn += to_string(bx[i]) + " " + to_string(by[i]) + "\n";
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
		set<pair<ll, ll>> st, expected_st;
		for (int i = 0; i < n; i++) {
			expected_st.insert({bx[i], by[i]});
		}
		string s;
		output_ss >> s;
		EXPECT_EQ("Yes", s);
		for (int i = 0; i < n; i++) {
			int d;
			output_ss >> d;
			st.insert({ax[i] + DX[d] * t, ay[i] + DY[d] * t});
		}
		EXPECT_EQ(expected_st, st);

		while ((bytes = read(errfd[READ_END], buffer.data(), buffer.size())) > 0) {
			StdErr.append(buffer.data(), bytes);
		}

		cleanup();
	}
};

void check(int n, ll t, vector<ll> ax, vector<ll> ay, vector<ll> bx, vector<ll> by) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.n = n;
	cmd.t = t;
	cmd.ax = ax;
	cmd.ay = ay;
	cmd.bx = bx;
	cmd.by = by;
	cmd.execute();
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if ("No" == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n;
		ll t;
		input_ss >> n >> t;
		vector<ll> ax(n), ay(n), bx(n), by(n);
		for (int i = 0; i < n; i++) {
			input_ss >> ax[i] >> ay[i];
		}
		for (int i = 0; i < n; i++) {
			input_ss >> bx[i] >> by[i];
		}
		check(n, t, ax, ay, bx, by);
	}
}

static_block {
	COMMAND = "problem077";
	EXTERNAL = "typical90/077";
	FUNC = &my_check;
}

TEST(typical90_problem077, case1) {
	check(3, 2, vector<ll>{3, 5, 9}, vector<ll>{3, 5, 2}, vector<ll>{11, 5, 3},
		  vector<ll>{2, 5, 3});
}

TEST(typical90_problem077, case2) {
	check(string("") + "3 2\n" + "3 3\n" + "5 5\n" + "9 2\n" + "11 1000000000\n" + "5 5\n" + "3 3",
		  string("") + "No");
}

TEST(typical90_problem077, case3) {
	check(20, 774,
		  vector<ll>{540130346, 139837096, 731188937, 18996195,	 153153670, 179733158, 698198250,
					 449248931, 249863070, 428066819, 554127636, 389988495, 889782910, 43905938,
					 638141790, 985957895, 971007109, 804625543, 905270323, 614855582},
		  vector<ll>{269080121, 165633078, 784167460, 52176517,	 738204723, 825294112, 713974773,
					 563096572, 242694893, 476630383, 460973490, 32320086,	956212985, 212030305,
					 667879166, 358743012, 827787244, 141347414, 167192824, 963943648},
		  vector<ll>{179733932, 731188163, 153154444, 554128410, 804626317, 449249705, 540129572,
					 638142564, 614855582, 18996969,  971007109, 889782910, 43906712,  389987721,
					 139836322, 428067593, 905271097, 249862296, 985958669, 698199024},
		  vector<ll>{825294886, 784166686, 738205497, 460973490, 141348188, 563096572, 269079347,
					 667878392, 963944422, 52177291,  827788018, 956213759, 212031079, 32319312,
					 165633078, 476631157, 167192824, 242694893, 358742238, 713975547});
}
