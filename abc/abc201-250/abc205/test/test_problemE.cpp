#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "2 3 1", string("") + "9");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "1 0 0", string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "1000000 1000000 1000000", string("") + "192151600");
}