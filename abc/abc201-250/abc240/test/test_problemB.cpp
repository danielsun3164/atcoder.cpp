#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc240/B";
}

TEST(abc240_problemB, case1) {
	check(string("") + "6\n" + "1 4 1 2 2 1", string("") + "3");
}

TEST(abc240_problemB, case2) {
	check(string("") + "1\n" + "1", string("") + "1");
}

TEST(abc240_problemB, case3) {
	check(string("") + "11\n" + "3 1 4 1 5 9 2 6 5 3 5", string("") + "7");
}
