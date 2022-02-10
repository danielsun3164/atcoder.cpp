#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc205E";

TEST(abc205E, case1) {
	check(PATH + COMMAND, string("") + "2 3 1", string("") + "9");
}

TEST(abc205E, case2) {
	check(PATH + COMMAND, string("") + "1 0 0", string("") + "0");
}

TEST(abc205E, case3) {
	check(PATH + COMMAND, string("") + "1000000 1000000 1000000", string("") + "192151600");
}
