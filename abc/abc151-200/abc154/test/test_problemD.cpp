#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";
static const double TOLERANCE = 1E-6;

TEST(problemD, case1) {
	check_about(PATH + COMMAND, string("") + "5 3\n" + "1 2 2 4 5", 7.0, TOLERANCE);
}

TEST(problemD, case2) {
	check_about(PATH + COMMAND, string("") + "4 1\n" + "6 6 6 6", 3.5, TOLERANCE);
}

TEST(problemD, case3) {
	check_about(PATH + COMMAND, string("") + "10 4\n" + "17 13 13 12 15 20 10 13 17 11", 32.0, TOLERANCE);
}
