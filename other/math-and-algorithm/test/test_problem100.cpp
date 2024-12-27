#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem100";
	TOLERANCE = 1E-7;
}

const static int N = 3;

void check(int q, vector<vector<double>> xyz, vector<int> t, vector<vector<double>> expected) {
	string input = to_string(q) + "\n";
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < N; j++) {
			input += to_string(xyz[i][j]) + " ";
		}
		input += to_string(t[i]) + "\n";
	}
	Command cmd = execute(input);
	int count = 0;
	for (char c : cmd.StdOut) {
		if ('\n' == c) {
			count++;
		}
	}
	EXPECT_EQ(q, count);
	istringstream output_ss(cmd.StdOut);
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < N; j++) {
			string output;
			output_ss >> output;
			check_output_about(output, expected[i][j]);
		}
	}
}

TEST(math_and_algorithm_problem100, case1) {
	check(5,
		  vector<vector<double>>{{0.10, 0.20, 0.30},
								 {0.02, 0.03, 0.01},
								 {0.50, 0.00, 0.00},
								 {0.20, 0.70, 0.60},
								 {1.00, 1.00, 1.00}},
		  vector<int>{2, 3, 16, 12345, 10000000},
		  vector<vector<double>>{{1.210000000000000, 1.120000000000000, 0.670000000000000},
								 {1.027637000000000, 0.942080000000000, 1.030283000000000},
								 {0.000015258789062, 1.000000000000000, 1.999984741210938},
								 {1.852941176470589, 0.529411764705882, 0.617647058823530},
								 {1.000000000000000, 1.000000000000000, 1.000000000000000}});
}
