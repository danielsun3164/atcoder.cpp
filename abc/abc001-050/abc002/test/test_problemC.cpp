#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	TOLERANCE = 0.01;
}

TEST(abc002_problemC, case1) {
	check_about(string("") + "1 0 3 0 2 5", 5.0);
}

TEST(abc002_problemC, case2) {
	check_about(string("") + "-1 -2 3 4 5 6", 2.0);
}

TEST(abc002_problemC, case3) {
	check_about(string("") + "298 520 903 520 4 663", 43257.5);
}
