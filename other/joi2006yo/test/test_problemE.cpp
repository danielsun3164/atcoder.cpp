#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "2 1 0 5", string("") + "0.50000");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 1 1 3", string("") + "0.833");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "2 2 1 3", string("") + "1.000");
}
