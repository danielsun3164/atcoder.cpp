#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(abc208_problemF, case1) {
	check(PATH + COMMAND, string("") + "3 4 2", string("") + "35");
}

TEST(abc208_problemF, case2) {
	check(PATH + COMMAND, string("") + "0 1 2", string("") + "0");
}

TEST(abc208_problemF, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 30 123456", string("") + "297085514");
}
