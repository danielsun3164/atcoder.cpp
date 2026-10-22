#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void check(string input, double expected1, double expected2) {
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	string result1, result2;
	output_ss >> result1 >> result2;
	check_output_about(result1, expected1);
	check_output_about(result2, expected2);
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	double expected1, expected2;
	expected_ss >> expected1 >> expected2;
	check(input, expected1, expected2);
}

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc246/B";
	TOLERANCE = 1E-6;
	FUNC = &my_check;
}

TEST(abc246_problemB, case1) {
	check(string("") + "3 4", 0.6, 0.8);
}

TEST(abc246_problemB, case2) {
	check(string("") + "1 0", 1.0, 0.0);
}

TEST(abc246_problemB, case3) {
	check(string("") + "246 402", 0.521964870245, 0.852966983083);
}
