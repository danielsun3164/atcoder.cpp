#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3 5 3\n" + "5\n" + "1 2\n" + "2 1\n" + "2 5\n" + "3 2\n" + "3 5",
			string("") + "5");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "7 3 1\n" + "4\n" + "3 2\n" + "3 3\n" + "4 2\n" + "4 3", string("") + "0");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "5 5 2\n" + "5\n" + "1 1\n" + "2 2\n" + "3 3\n" + "4 4\n" + "5 5",
			string("") + "20");
}
