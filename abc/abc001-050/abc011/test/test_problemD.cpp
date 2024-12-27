#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	TOLERANCE = 1E-9;
}

TEST(abc011_problemD, case1) {
	check_about(string("") + "2 10000000\n" + "10000000 10000000", 0.125);
}

TEST(abc011_problemD, case2) {
	check_about(string("") + "100 2\n" + "3 7", 0.0);
}

TEST(abc011_problemD, case3) {
	check_about(string("") + "11 8562174\n" + "25686522 17124348", 0.018174648284912);
}
