#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB";

static const double TOLERANCE = 1E-3;

TEST(problemB, case1) {
	check_about(COMMAND, string("") + "1 10 10\n" + "3 5", 2.857142857142857, TOLERANCE);
}

TEST(problemB, case2) {
	check_about(COMMAND, string("") + "1 10 10\n" + "3 2", 0.0, TOLERANCE);
}

TEST(problemB, case3) {
	check_about(COMMAND, string("") + "5 896 483\n" + "228 59\n" + "529 310\n" + "339 60\n" + "78 266\n" + "659 391",
			245.3080684596577, TOLERANCE);
}
