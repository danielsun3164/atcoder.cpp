#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "chchokudai", string("") + "3");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "atcoderrr", string("") + "0");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "chokudaichokudaichokudai", string("") + "45");
}
