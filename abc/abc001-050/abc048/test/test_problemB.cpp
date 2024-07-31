#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC064/B";
}

TEST(abc048_problemB, case1) {
	check(string("") + "4 8 2", string("") + "3");
}

TEST(abc048_problemB, case2) {
	check(string("") + "0 5 1", string("") + "6");
}

TEST(abc048_problemB, case3) {
	check(string("") + "9 9 2", string("") + "0");
}

TEST(abc048_problemB, case4) {
	check(string("") + "1 1000000000000000000 3", string("") + "333333333333333333");
}
