#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";
static const double TOLERANCE = 1E-2;

TEST(problemA, case1) {
	check_about(PATH + COMMAND, string("") + "1", 6.28318530717958623200, TOLERANCE);
}

TEST(problemA, case2) {
	check_about(PATH + COMMAND, string("") + "73", 458.67252742410977361942, TOLERANCE);
}
