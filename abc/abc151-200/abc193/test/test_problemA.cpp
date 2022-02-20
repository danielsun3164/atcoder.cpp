#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

static const double TOLERANCE = 1E-2;

TEST(problemA, case1) {
	check_about(PATH + COMMAND, string("") + "100 80", 20.0, TOLERANCE);
}

TEST(problemA, case2) {
	check_about(PATH + COMMAND, string("") + "7 6", 14.285714285714285714, TOLERANCE);
}

TEST(problemA, case3) {
	check_about(PATH + COMMAND, string("") + "99999 99998", 0.00100001000010000100, TOLERANCE);
}
