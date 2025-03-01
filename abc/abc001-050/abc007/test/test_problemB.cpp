#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

void check(string input) {
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	string output;
	output_ss >> output;
	EXPECT_TRUE(output < input);
	if (output >= input) {
		cout << "output=" << output << ", input=" << input << endl;
	}
}

TEST(abc007_problemB, case1) {
	check("xyz");
}

TEST(abc007_problemB, case2) {
	check("c");
}

TEST(abc007_problemB, case3) {
	check(string("") + "a", string("") + "-1");
}

TEST(abc007_problemB, case4) {
	check("aaaaa");
}
