#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

static const double TOLERANCE = 1E-5;

TEST(abc193_problemD, case1) {
	check_about(string("") + "2\n" + "1144#\n" + "2233#", 0.4444444444444444, TOLERANCE);
}

TEST(abc193_problemD, case2) {
	check_about(string("") + "2\n" + "9988#\n" + "1122#", 1.0, TOLERANCE);
}

TEST(abc193_problemD, case3) {
	check_about(string("") + "6\n" + "1122#\n" + "2228#", 0.001932367149758454, TOLERANCE);
}

TEST(abc193_problemD, case4) {
	check_about(string("") + "100000\n" + "3226#\n" + "3597#", 0.6296297942426154, TOLERANCE);
}
