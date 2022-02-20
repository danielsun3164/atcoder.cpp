#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

static const double TOLERANCE = 1E-5;

TEST(problemD, case1) {
	check_about(PATH + COMMAND, string("") + "2\n" + "1144#\n" + "2233#", 0.4444444444444444, TOLERANCE);
}

TEST(problemD, case2) {
	check_about(PATH + COMMAND, string("") + "2\n" + "9988#\n" + "1122#", 1.0, TOLERANCE);
}

TEST(problemD, case3) {
	check_about(PATH + COMMAND, string("") + "6\n" + "1122#\n" + "2228#", 0.001932367149758454, TOLERANCE);
}

TEST(problemD, case4) {
	check_about(PATH + COMMAND, string("") + "100000\n" + "3226#\n" + "3597#", 0.6296297942426154, TOLERANCE);
}
