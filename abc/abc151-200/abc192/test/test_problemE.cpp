#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 2 1 3\n" + "1 2 2 3\n" + "2 3 3 4", string("") + "7");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 2 3 1\n" + "1 2 2 3\n" + "2 3 3 4", string("") + "5");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "3 0 3 1", string("") + "-1");
}

TEST(problemE, case4) {
	check(PATH + COMMAND,
			string("") + "9 14 6 7\n" + "3 1 4 1\n" + "5 9 2 6\n" + "5 3 5 8\n" + "9 7 9 3\n" + "2 3 8 4\n"
					+ "6 2 6 4\n" + "3 8 3 2\n" + "7 9 5 2\n" + "8 4 1 9\n" + "7 1 6 9\n" + "3 9 9 3\n" + "7 5 1 5\n"
					+ "8 2 9 7\n" + "4 9 4 4", string("") + "26");
}
