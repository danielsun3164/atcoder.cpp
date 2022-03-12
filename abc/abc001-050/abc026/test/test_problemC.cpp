#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1\n" + "1\n" + "1\n" + "1", string("") + "3");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "7\n" + "1\n" + "1\n" + "2\n" + "2\n" + "3\n" + "3", string("") + "7");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "1\n" + "2\n" + "3\n" + "3\n" + "2", string("") + "11");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "10\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7\n" + "8\n" + "9",
			string("") + "1023");
}
