#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}
static const double TOLERANCE = 1E-6;

TEST(abc008_problemC, case1) {
	check_about(string("") + "3\n" + "2\n" + "4\n" + "8", 2.166666666667, TOLERANCE);
}

TEST(abc008_problemC, case2) {
	check_about(string("") + "4\n" + "5\n" + "5\n" + "5\n" + "5", 2.0, TOLERANCE);
}

TEST(abc008_problemC, case3) {
	check_about(string("") + "5\n" + "2\n" + "3\n" + "2\n" + "6\n" + "12", 3.10, TOLERANCE);
}
