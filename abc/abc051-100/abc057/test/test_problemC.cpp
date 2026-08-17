#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC057/C";
}

TEST(abc057_problemC, case1) {
	check(string("") + "10000", string("") + "3");
}

TEST(abc057_problemC, case2) {
	check(string("") + "1000003", string("") + "7");
}

TEST(abc057_problemC, case3) {
	check(string("") + "9876543210", string("") + "6");
}
