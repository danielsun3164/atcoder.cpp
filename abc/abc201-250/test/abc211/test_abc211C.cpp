#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc211C";

TEST(abc211C, case1) {
	check(PATH + COMMAND, string("") + "chchokudai", string("") + "3");
}

TEST(abc211C, case2) {
	check(PATH + COMMAND, string("") + "atcoderrr", string("") + "0");
}

TEST(abc211C, case3) {
	check(PATH + COMMAND, string("") + "chokudaichokudaichokudai", string("") + "45");
}
