#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc002C";
static const double TOLERANCE = 0.01;

TEST(abc002C, case1) {
	check_about(COMMAND, string("") + "1 0 3 0 2 5", 5.0, TOLERANCE);
}

TEST(abc002C, case2) {
	check_about(COMMAND, string("") + "-1 -2 3 4 5 6", 2.0, TOLERANCE);
}

TEST(abc002C, case3) {
	check_about(COMMAND, string("") + "298 520 903 520 4 663", 43257.5, TOLERANCE);
}
