#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "33", string("") + "3");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "1333", string("") + "13");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "10000000", string("") + "999");
}
