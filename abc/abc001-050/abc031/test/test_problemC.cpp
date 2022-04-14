#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 -3 3 9 1 6", string("") + "6");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "5 5 5", string("") + "10");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "8\n" + "-1 10 -1 2 -1 10 -1 0", string("") + "-1");
}
