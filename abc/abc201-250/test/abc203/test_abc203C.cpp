#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc203C";

TEST(abc203C, case1) {
	check(PATH + COMMAND, string("") + "2 3\n" + "2 1\n" + "5 10", string("") + "4");
}

TEST(abc203C, case2) {
	check(PATH + COMMAND,
			string("") + "5 1000000000\n" + "1 1000000000\n" + "2 1000000000\n" + "3 1000000000\n" + "4 1000000000\n"
					+ "5 1000000000", string("") + "6000000000");
}

TEST(abc203C, case3) {
	check(PATH + COMMAND, string("") + "3 2\n" + "5 5\n" + "2 1\n" + "2 2", string("") + "10");
}
