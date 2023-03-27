#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc216_problemC, case1) {
	check(PATH + COMMAND, string("") + "5", string("") + "AABA", string("") + "ABBA");
}

TEST(abc216_problemC, case2) {
	check(PATH + COMMAND, string("") + "14", string("") + "BBABBAAAB", string("") + "ABABAB");
}
