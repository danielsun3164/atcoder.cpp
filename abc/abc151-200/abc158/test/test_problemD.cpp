#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc158_problemD, case1) {
	check(PATH + COMMAND, string("") + "a\n" + "4\n" + "2 1 p\n" + "1\n" + "2 2 c\n" + "1", string("") + "cpa");
}

TEST(abc158_problemD, case2) {
	check(PATH + COMMAND, string("") + "a\n" + "6\n" + "2 2 a\n" + "2 1 b\n" + "1\n" + "2 2 c\n" + "1\n" + "1",
			string("") + "aabc");
}

TEST(abc158_problemD, case3) {
	check(PATH + COMMAND, string("") + "y\n" + "1\n" + "2 1 x", string("") + "xy");
}
