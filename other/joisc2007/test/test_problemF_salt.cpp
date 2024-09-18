#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(string input) {
	Command cmd = execute(input);
	int last1 = cmd.StdErr.find_last_of("\n");
	int last2 = cmd.StdErr.find_last_of("\n", last1 - 2);
	EXPECT_EQ("AC: player won", cmd.StdErr.substr(last2 + 1, last1 - last2 - 1));
}

void my_check(string input, string expected) {
	ignore = expected;
	check(input);
}

static_block {
	COMMAND = "problemF_salt";
	EXTERNAL = "joisc2007/Salt";
	FUNC = &my_check;
}

TEST(joisc2007_problemF, case1) {
	check(string("") + "7\n" + "3 4\n" + "5 7\n" + "4 6\n" + "2 4\n" + "1 4\n" + "1 7");
}
