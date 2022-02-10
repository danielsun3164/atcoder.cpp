#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc011D";
static const double TOLERANCE = 1E-9;

TEST(abc011D, case1) {
	check_about(PATH + COMMAND, string("") + "2 10000000\n" + "10000000 10000000", 0.125, TOLERANCE);
}

TEST(abc011D, case2) {
	check_about(PATH + COMMAND, string("") + "100 2\n" + "3 7", 0.0, TOLERANCE);
}

TEST(abc011D, case3) {
	check_about(PATH + COMMAND, string("") + "11 8562174\n" + "25686522 17124348", 0.018174648284912, TOLERANCE);
}
