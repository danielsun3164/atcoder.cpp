#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

void my_check(string input, __attribute__((unused))         string expected) {
	istringstream input_ss(input);
	int a, b, c;
	input_ss >> a >> b >> c;
	Command cmd = execute(input);
	istringstream expected_ss(expected);
	int expected_result;
	expected_ss >> expected_result;
	if (-1 == expected_result) {
		EXPECT_EQ(expected, cmd.StdOut);
	} else {
		istringstream output_ss(cmd.StdOut);
		int result;
		output_ss >> result;
		EXPECT_EQ(0, result % c);
		EXPECT_TRUE((a <= result) && (result <= b));
	}
}

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc220/A";
	FUNC = &my_check;
}

TEST(abc220_problemA, case1) {
	check(string("") + "123 456 100", string("") + "200");
}

TEST(abc220_problemA, case2) {
	check(string("") + "630 940 314", string("") + "-1");
}
