#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "1 0", string("") + "4");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "2 5", string("") + "10");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "10 10", string("") + "213");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "30 100", string("") + "2471");
}
