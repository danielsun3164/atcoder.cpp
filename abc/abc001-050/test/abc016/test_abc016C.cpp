#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc016C";

TEST(abc016C, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 2\n" + "2 3", string("") + "1\n" + "0\n" + "1");
}

TEST(abc016C, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 2\n" + "1 3\n" + "2 3", string("") + "0\n" + "0\n" + "0");
}

TEST(abc016C, case3) {
	check(PATH + COMMAND,
			string("") + "8 12\n" + "1 6\n" + "1 7\n" + "1 8\n" + "2 5\n" + "2 6\n" + "3 5\n" + "3 6\n" + "4 5\n"
					+ "4 8\n" + "5 6\n" + "5 7\n" + "7 8",
			string("") + "4\n" + "4\n" + "4\n" + "5\n" + "2\n" + "3\n" + "4\n" + "2");
}
