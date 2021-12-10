#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc008C";
static const double TOLERANCE = 1E-6;

TEST(abc008C, case1) {
	check_about(COMMAND, string("") + "3\n" + "2\n" + "4\n" + "8", 2.166666666667, TOLERANCE);
}

TEST(abc008C, case2) {
	check_about(COMMAND, string("") + "4\n" + "5\n" + "5\n" + "5\n" + "5", 2.0, TOLERANCE);
}

TEST(abc008C, case3) {
	check_about(COMMAND, string("") + "5\n" + "2\n" + "3\n" + "2\n" + "6\n" + "12", 3.10, TOLERANCE);
}
