#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "7 6\n" + "4\n" + "3\n" + "1\n" + "1\n" + "2\n" + "10\n" + "2",
			string("") + "4");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "6 10\n" + "10\n" + "10\n" + "10\n" + "10\n" + "0\n" + "10", string("") + "6");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "6 9\n" + "10\n" + "10\n" + "10\n" + "10\n" + "10\n" + "10", string("") + "0");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "4 0\n" + "1\n" + "2\n" + "3\n" + "4", string("") + "0");
}
