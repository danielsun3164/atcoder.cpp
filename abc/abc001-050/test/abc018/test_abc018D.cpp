#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc018D";

TEST(abc018D, case1) {
	check(PATH + COMMAND,
			string("") + "3 4 2 3 7\n" + "1 1 9\n" + "1 2 7\n" + "1 3 15\n" + "1 4 6\n" + "2 2 3\n" + "2 4 6\n"
					+ "3 3 6", string("") + "37");
}

TEST(abc018D, case2) {
	check(PATH + COMMAND,
			string("") + "4 5 3 2 9\n" + "2 3 5\n" + "3 1 4\n" + "2 2 2\n" + "4 1 9\n" + "3 5 3\n" + "3 3 8\n"
					+ "1 4 5\n" + "1 5 7\n" + "2 4 8", string("") + "26");
}
