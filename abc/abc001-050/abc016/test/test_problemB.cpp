#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "1 0 1", string("") + "?");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "1 1 2", string("") + "+");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "1 1 0", string("") + "-");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "1 1 1", string("") + "!");
}
