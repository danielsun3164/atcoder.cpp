#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";
static const double TOLERANCE = 1E-6;

TEST(abc026_problemB, case1) {
	check_about(PATH + COMMAND, string("") + "3\n" + "1\n" + "2\n" + "3", 18.8495559215, TOLERANCE);
}

TEST(abc026_problemB, case2) {
	check_about(PATH + COMMAND, string("") + "6\n" + "15\n" + "2\n" + "3\n" + "7\n" + "6\n" + "9", 508.938009881546,
			TOLERANCE);
}
