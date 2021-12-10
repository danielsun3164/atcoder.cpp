#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc205A";
static const double TOLERANCE = 1E-6;

TEST(abc205A, case1) {
	check_about(COMMAND, string("") + "45 200", 90.0, TOLERANCE);
}

TEST(abc205A, case2) {
	check_about(COMMAND, string("") + "37 450", 166.5, TOLERANCE);
}

TEST(abc205A, case3) {
	check_about(COMMAND, string("") + "0 1000", 0.0, TOLERANCE);
}

TEST(abc205A, case4) {
	check_about(COMMAND, string("") + "50 0", 0.0, TOLERANCE);
}
