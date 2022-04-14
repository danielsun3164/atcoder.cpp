#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "6", string("") + "2");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000", string("") + "59");
}
