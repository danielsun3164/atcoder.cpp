#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";
static const double TOLERANCE = 1E-6;

TEST(problemC, case1) {
	check_about(PATH + COMMAND, string("") + "3", 1.0, TOLERANCE);
}

TEST(problemC, case2) {
	check_about(PATH + COMMAND, string("") + "999", 36926037.0, TOLERANCE);
}
