#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "4 4 1\n" + "2 1\n" + "1 3\n" + "3 2\n" + "3 4\n" + "4 1",
			string("") + "0 1 0 1");
}

TEST(problemD, case2) {
	check(PATH + COMMAND,
			string("") + "5 10 0\n" + "1 2\n" + "1 3\n" + "1 4\n" + "1 5\n" + "3 2\n" + "2 4\n" + "2 5\n" + "4 3\n"
					+ "5 3\n" + "4 5", string("") + "0 0 0 0 0");
}

TEST(problemD, case3) {
	check(PATH + COMMAND,
			string("") + "10 9 3\n" + "10 1\n" + "6 7\n" + "8 2\n" + "2 5\n" + "8 4\n" + "7 3\n" + "10 9\n" + "6 4\n"
					+ "5 8\n" + "2 6\n" + "7 5\n" + "3 1", string("") + "1 3 5 4 3 3 3 3 1 0");
}
