#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc014D";

TEST(abc014D, case1) {
	check(PATH + COMMAND,
			string("") + "5\n" + "1 2\n" + "1 3\n" + "1 4\n" + "4 5\n" + "3\n" + "2 3\n" + "2 5\n" + "2 4",
			string("") + "3\n" + "4\n" + "3");
}

TEST(abc014D, case2) {
	check(PATH + COMMAND,
			string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "5 6\n" + "4\n" + "1 3\n" + "1 4\n" + "1 5\n"
					+ "1 6", string("") + "3\n" + "4\n" + "5\n" + "6");
}

TEST(abc014D, case3) {
	check(PATH + COMMAND,
			string("") + "7\n" + "3 1\n" + "2 1\n" + "2 4\n" + "2 5\n" + "3 6\n" + "3 7\n" + "5\n" + "4 5\n" + "1 6\n"
					+ "5 6\n" + "4 7\n" + "5 3", string("") + "3\n" + "3\n" + "5\n" + "5\n" + "4");
}
