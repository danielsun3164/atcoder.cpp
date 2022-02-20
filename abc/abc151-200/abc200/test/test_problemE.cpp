#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "2 5", string("") + "1 2 2");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "1000000 1000000000000000000", string("") + "1000000 1000000 1000000");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "9 47", string("") + "3 1 4");
}
