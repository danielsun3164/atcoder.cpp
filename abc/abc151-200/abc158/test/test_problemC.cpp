#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC158/C";
}

TEST(abc158_problemC, case1) {
	check(string("") + "2 2", string("") + "25");
}

TEST(abc158_problemC, case2) {
	check(string("") + "8 10", string("") + "100");
}

TEST(abc158_problemC, case3) {
	check(string("") + "19 99", string("") + "-1");
}
