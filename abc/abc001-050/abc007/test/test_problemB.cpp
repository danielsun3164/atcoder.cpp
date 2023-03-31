#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

void check(string input) {
	Command cmd = execute(input);
	streambuf *orig = cin.rdbuf();
	istringstream input_ss(cmd.StdOut);
	cin.rdbuf(input_ss.rdbuf());
	string output;
	cin >> output;
	EXPECT_TRUE(output < input);
	if (output >= input) {
		cout << "output=" << output << ", input=" << input << endl;
	}
	cin.rdbuf(orig);
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
