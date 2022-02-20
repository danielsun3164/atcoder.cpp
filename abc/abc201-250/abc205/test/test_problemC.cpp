#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3 2 4", string("") + ">");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "-7 7 2", string("") + "=");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "-8 6 3", string("") + "<");
}
