#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc240/G";
}

TEST(abc240_problemG, case1) {
	check(string("") + "3 2 0 -1", string("") + "3");
}

TEST(abc240_problemG, case2) {
	check(string("") + "1 0 0 0", string("") + "0");
}

TEST(abc240_problemG, case3) {
	check(string("") + "314 15 92 65", string("") + "106580952");
}
