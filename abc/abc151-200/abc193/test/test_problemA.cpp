#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

static const double TOLERANCE = 1E-2;

TEST(abc193_problemA, case1) {
	check_about(string("") + "100 80", 20.0, TOLERANCE);
}

TEST(abc193_problemA, case2) {
	check_about(string("") + "7 6", 14.285714285714285714, TOLERANCE);
}

TEST(abc193_problemA, case3) {
	check_about(string("") + "99999 99998", 0.00100001000010000100, TOLERANCE);
}
