#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc194D";

static const double TOLERANCE = 10E-6;

TEST(abc194D, case1) {
	check_about(COMMAND, string("") + "2", 2.0, TOLERANCE);
}

TEST(abc194D, case2) {
	check_about(COMMAND, string("") + "3", 4.5, TOLERANCE);
}
