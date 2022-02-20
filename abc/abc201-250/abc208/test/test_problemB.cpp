#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "9", string("") + "3");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "119", string("") + "10");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "10000000", string("") + "24");
}
