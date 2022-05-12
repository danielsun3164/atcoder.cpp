#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";
static const double TOLERANCE = 1E-6;

TEST(abc205_problemA, case1) {
	check_about(PATH + COMMAND, string("") + "45 200", 90.0, TOLERANCE);
}

TEST(abc205_problemA, case2) {
	check_about(PATH + COMMAND, string("") + "37 450", 166.5, TOLERANCE);
}

TEST(abc205_problemA, case3) {
	check_about(PATH + COMMAND, string("") + "0 1000", 0.0, TOLERANCE);
}

TEST(abc205_problemA, case4) {
	check_about(PATH + COMMAND, string("") + "50 0", 0.0, TOLERANCE);
}
