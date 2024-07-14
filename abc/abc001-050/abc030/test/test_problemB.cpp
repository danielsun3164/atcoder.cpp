#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	TOLERANCE = 1E-4;
}

TEST(abc030_problemB, case1) {
	check_about(string("") + "15 0", 90.0);
}

TEST(abc030_problemB, case2) {
	check_about(string("") + "3 17", 3.5);
}

TEST(abc030_problemB, case3) {
	check_about(string("") + "0 0", 0.0);
}

TEST(abc030_problemB, case4) {
	check_about(string("") + "6 0", 180.0);
}

TEST(abc030_problemB, case5) {
	check_about(string("") + "23 59", 5.5);
}
