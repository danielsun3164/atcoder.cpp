#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc211A";

static const double TOLERANCE = 1E-5;

TEST(abc211A, case1) {
	check_about(PATH + COMMAND, string("") + "130 100", 110.0, TOLERANCE);
}

TEST(abc211A, case2) {
	check_about(PATH + COMMAND, string("") + "300 50", 133.3333333, TOLERANCE);
}

TEST(abc211A, case3) {
	check_about(PATH + COMMAND, string("") + "123 123", 123.0, TOLERANCE);
}
