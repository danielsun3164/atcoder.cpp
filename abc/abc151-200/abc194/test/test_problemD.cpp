#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

static const double TOLERANCE = 1E-6;

TEST(abc194_problemD, case1) {
	check_about(string("") + "2", 2.0, TOLERANCE);
}

TEST(abc194_problemD, case2) {
	check_about(string("") + "3", 4.5, TOLERANCE);
}
