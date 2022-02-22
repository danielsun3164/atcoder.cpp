#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND,
			string("") + "7\n" + "1 7\n" + "8\n" + "1 2\n" + "1 3\n" + "4 2\n" + "4 3\n" + "4 5\n" + "4 6\n" + "7 5\n"
					+ "7 6", string("") + "4");
}

TEST(problemC, case2) {
	check(PATH + COMMAND,
			string("") + "7\n" + "1 7\n" + "9\n" + "1 2\n" + "1 3\n" + "4 2\n" + "4 3\n" + "4 5\n" + "4 6\n" + "7 5\n"
					+ "7 6\n" + "4 7", string("") + "2");
}
