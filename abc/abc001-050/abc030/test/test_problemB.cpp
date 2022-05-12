#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";
static const double TOLERANCE = 1E-4;

TEST(abc030_problemB, case1) {
	check_about(PATH + COMMAND, string("") + "15 0", 90.0, TOLERANCE);
}

TEST(abc030_problemB, case2) {
	check_about(PATH + COMMAND, string("") + "3 17", 3.5, TOLERANCE);
}

TEST(abc030_problemB, case3) {
	check_about(PATH + COMMAND, string("") + "0 0", 0.0, TOLERANCE);
}

TEST(abc030_problemB, case4) {
	check_about(PATH + COMMAND, string("") + "6 0", 180.0, TOLERANCE);
}

TEST(abc030_problemB, case5) {
	check_about(PATH + COMMAND, string("") + "23 59", 5.5, TOLERANCE);
}
