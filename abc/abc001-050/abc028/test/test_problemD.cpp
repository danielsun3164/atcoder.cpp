#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";
static const double TOLERANCE = 1E-9;

TEST(problemD, case1) {
	check_about(PATH + COMMAND, string("") + "3 2", 0.48148148148148148148, TOLERANCE);
}

TEST(problemD, case2) {
	check_about(PATH + COMMAND, string("") + "3 1", 0.25925925925925925926, TOLERANCE);
}

TEST(problemD, case3) {
	check_about(PATH + COMMAND, string("") + "765 573", 0.00147697396984624371, TOLERANCE);
}