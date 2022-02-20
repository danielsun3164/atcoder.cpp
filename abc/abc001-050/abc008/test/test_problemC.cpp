#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";
static const double TOLERANCE = 1E-6;

TEST(problemC, case1) {
	check_about(PATH + COMMAND, string("") + "3\n" + "2\n" + "4\n" + "8", 2.166666666667, TOLERANCE);
}

TEST(problemC, case2) {
	check_about(PATH + COMMAND, string("") + "4\n" + "5\n" + "5\n" + "5\n" + "5", 2.0, TOLERANCE);
}

TEST(problemC, case3) {
	check_about(PATH + COMMAND, string("") + "5\n" + "2\n" + "3\n" + "2\n" + "6\n" + "12", 3.10, TOLERANCE);
}
