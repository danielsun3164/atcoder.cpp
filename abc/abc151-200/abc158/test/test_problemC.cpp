#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "2 2", string("") + "25");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "8 10", string("") + "100");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "19 99", string("") + "-1");
}