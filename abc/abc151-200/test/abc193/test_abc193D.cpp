#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc193D";

static const double TOLERANCE = 10E-5;

TEST(abc193D, case1) {
	check_about(COMMAND, string("") + "2\n" + "1144#\n" + "2233#", 0.4444444444444444, TOLERANCE);
}

TEST(abc193D, case2) {
	check_about(COMMAND, string("") + "2\n" + "9988#\n" + "1122#", 1.0, TOLERANCE);
}

TEST(abc193D, case3) {
	check_about(COMMAND, string("") + "6\n" + "1122#\n" + "2228#", 0.001932367149758454, TOLERANCE);
}

TEST(abc193D, case4) {
	check_about(COMMAND, string("") + "100000\n" + "3226#\n" + "3597#", 0.6296297942426154, TOLERANCE);
}
