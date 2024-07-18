#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC061/C";
}

TEST(abc045_problemC, case1) {
	check(string("") + "125", string("") + "176");
}

TEST(abc045_problemC, case2) {
	check(string("") + "9999999999", string("") + "12656242944");
}
