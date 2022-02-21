#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3 4\n" + "1 2 3\n" + "2 1 3\n" + "2 2 3\n" + "1 2 3\n" + "2 2 3",
			string("") + "0\n" + "1\n" + "2");
}

TEST(problemF, case2) {
	check(PATH + COMMAND,
			string("") + "10 10\n" + "0 5 3 4 7 0 0 0 1 0\n" + "1 10 7\n" + "2 8 9\n" + "2 3 6\n" + "2 1 6\n"
					+ "2 1 10\n" + "1 9 4\n" + "1 6 1\n" + "1 6 3\n" + "1 1 7\n" + "2 3 5",
			string("") + "1\n" + "0\n" + "5\n" + "3\n" + "0");
}