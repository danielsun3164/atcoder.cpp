#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(abc206_problemE, case1) {
	check(PATH + COMMAND, string("") + "3 7", string("") + "2");
}

TEST(abc206_problemE, case2) {
	check(PATH + COMMAND, string("") + "4 10", string("") + "12");
}

TEST(abc206_problemE, case3) {
	check(PATH + COMMAND, string("") + "1 1000000", string("") + "392047955148");
}
