#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc208D";

TEST(abc208D, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 2 3\n" + "2 3 2", string("") + "25");
}

TEST(abc208D, case2) {
	check(PATH + COMMAND, string("") + "3 0", string("") + "0");
}

TEST(abc208D, case3) {
	check(PATH + COMMAND,
			string("") + "5 20\n" + "1 2 6\n" + "1 3 10\n" + "1 4 4\n" + "1 5 1\n" + "2 1 5\n" + "2 3 9\n" + "2 4 8\n"
					+ "2 5 6\n" + "3 1 5\n" + "3 2 1\n" + "3 4 7\n" + "3 5 9\n" + "4 1 4\n" + "4 2 6\n" + "4 3 4\n"
					+ "4 5 8\n" + "5 1 2\n" + "5 2 5\n" + "5 3 6\n" + "5 4 5", string("") + "517");
}
