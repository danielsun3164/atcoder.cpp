#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc205/C";
}

TEST(abc205_problemC, case1) {
	check(string("") + "3 2 4", string("") + ">");
}

TEST(abc205_problemC, case2) {
	check(string("") + "-7 7 2", string("") + "=");
}

TEST(abc205_problemC, case3) {
	check(string("") + "-8 6 3", string("") + "<");
}
