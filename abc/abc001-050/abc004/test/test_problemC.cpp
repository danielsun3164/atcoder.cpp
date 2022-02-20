#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "213456");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "5", string("") + "234561");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "22", string("") + "615234");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "100000000", string("") + "345612");
}
