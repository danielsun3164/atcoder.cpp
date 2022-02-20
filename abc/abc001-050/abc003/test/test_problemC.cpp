#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";
static const double TOLERANCE = 1E-6;

TEST(problemC, case1) {
	check_about(PATH + COMMAND, string("") + "2 2\n" + "1000 1500", 1000.0, TOLERANCE);
}

TEST(problemC, case2) {
	check_about(PATH + COMMAND, string("") + "2 1\n" + "1000 1500", 750.0, TOLERANCE);
}

TEST(problemC, case3) {
	check_about(PATH + COMMAND, string("") + "10 5\n" + "2604 2281 3204 2264 2200 2650 2229 2461 2439 2211", 2820.03125,
			TOLERANCE);
}
