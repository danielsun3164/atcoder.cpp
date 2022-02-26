#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "7 4", string("") + "1");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "2 6", string("") + "2");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 1", string("") + "0");
}
