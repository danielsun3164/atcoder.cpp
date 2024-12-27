#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void check(int n, vector<int> a, double expected_average, int expected_median) {
	string input = to_string(n) + "\n";
	for (int i = 0; i < n; i++) {
		input += ((i) ? " " : "") + to_string(a[i]);
	}
	input += "\n";
	Command cmd = execute(input);
	int count = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			count++;
		}
	}
	EXPECT_EQ(2, count);
	istringstream output_ss(cmd.StdOut);
	string actual_average;
	int actual_median;
	output_ss >> actual_average >> actual_median;
	check_output_about(actual_average, expected_average);
	EXPECT_EQ(expected_median, actual_median);
}

void my_check(string input, string expected) {
	istringstream input_ss(input);
	int n;
	input_ss >> n;
	vector<int> a(n);
	for (int &ai : a) {
		input_ss >> ai;
	}

	istringstream expected_ss(expected);
	double expected_average;
	int expected_median;
	expected_ss >> expected_average >> expected_median;

	check(n, a, expected_average, expected_median);
}

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc236/E";
	FUNC = &my_check;
	TOLERANCE = 1E-3;
}

TEST(abc236_problemE, case1) {
	check(6, vector<int>{2, 1, 2, 1, 1, 10}, 4.0, 2);
}

TEST(abc236_problemE, case2) {
	check(7, vector<int>{3, 1, 4, 1, 5, 9, 2}, 5.25, 4);
}
