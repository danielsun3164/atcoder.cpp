#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc211_problemC, case1) {
	check(PATH + COMMAND, string("") + "chchokudai", string("") + "3");
}

TEST(abc211_problemC, case2) {
	check(PATH + COMMAND, string("") + "atcoderrr", string("") + "0");
}

TEST(abc211_problemC, case3) {
	check(PATH + COMMAND, string("") + "chokudaichokudaichokudai", string("") + "45");
}
