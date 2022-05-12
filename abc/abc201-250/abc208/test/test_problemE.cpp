#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(abc208_problemE, case1) {
	check(PATH + COMMAND, string("") + "13 2", string("") + "5");
}

TEST(abc208_problemE, case2) {
	check(PATH + COMMAND, string("") + "100 80", string("") + "99");
}

TEST(abc208_problemE, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 1000000000", string("") + "841103275147365677");
}
