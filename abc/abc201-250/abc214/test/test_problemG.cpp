#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemG";

TEST(problemG, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2 3 4\n" + "2 1 4 3", string("") + "4");
}

TEST(problemG, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3\n" + "2 1 3", string("") + "0");
}

TEST(problemG, case3) {
	check(PATH + COMMAND,
			string("") + "20\n" + "2 3 15 19 10 7 5 6 14 13 20 4 18 9 17 8 12 11 16 1\n"
					+ "8 12 4 13 19 3 10 16 11 9 1 2 17 6 5 18 7 14 20 15", string("") + "803776944");
}

