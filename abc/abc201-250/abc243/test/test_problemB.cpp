#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc243/B";
}

TEST(abc243_problemB, case1) {
	check(string("") + "4\n" + "1 3 5 2\n" + "2 3 1 4", string("") + "1\n" + "2");
}

TEST(abc243_problemB, case2) {
	check(string("") + "3\n" + "1 2 3\n" + "4 5 6", string("") + "0\n" + "0");
}

TEST(abc243_problemB, case3) {
	check(string("") + "7\n" + "4 8 1 7 9 5 6\n" + "3 5 1 7 8 2 6", string("") + "3\n" + "2");
}
