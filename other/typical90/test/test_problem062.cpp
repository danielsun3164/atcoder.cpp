#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem062";

TEST(typical90_problem062, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "3 4\n" + "1 3\n" + "2 3\n" + "2 1",
			string("") + "4\n" + "2\n" + "1\n" + "3");
}

TEST(typical90_problem062, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "1 1\n" + "2 2\n" + "3 3", string("") + "3\n" + "2\n" + "1");
}

TEST(typical90_problem062, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "3 4\n" + "4 5\n" + "1 1\n" + "5 1\n" + "3 2", string("") + "-1");
}

TEST(typical90_problem062, case4) {
	check(PATH + COMMAND, string("") + "6\n" + "5 5\n" + "2 4\n" + "6 6\n" + "5 2\n" + "1 3\n" + "4 1",
			string("") + "1\n" + "5\n" + "3\n" + "6\n" + "4\n" + "2");
}

TEST(typical90_problem062, case5) {
	check(PATH + COMMAND,
			string("") + "10\n" + "5 1\n" + "3 9\n" + "7 8\n" + "9 3\n" + "3 7\n" + "10 10\n" + "3 5\n" + "4 7\n"
					+ "1 1\n" + "6 6", string("") + "-1");
}
