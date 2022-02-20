#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 7", string("") + "2");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "4 10", string("") + "12");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "1 1000000", string("") + "392047955148");
}
