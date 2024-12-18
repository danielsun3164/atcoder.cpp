#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc238/C";
}

TEST(abc238_problemC, case1) {
	check(string("") + "16", string("") + "73");
}

TEST(abc238_problemC, case2) {
	check(string("") + "238", string("") + "13870");
}

TEST(abc238_problemC, case3) {
	check(string("") + "999999999999999999", string("") + "762062362");
}
