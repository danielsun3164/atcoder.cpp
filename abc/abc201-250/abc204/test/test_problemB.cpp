#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc204/B";
}

TEST(abc204_problemB, case1) {
	check(string("") + "3\n" + "6 17 28", string("") + "25");
}

TEST(abc204_problemB, case2) {
	check(string("") + "4\n" + "8 9 10 11", string("") + "1");
}
