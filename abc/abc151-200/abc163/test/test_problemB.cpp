#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC163/B";
}

TEST(abc163_problemB, case1) {
	check(string("") + "41 2\n" + "5 6", string("") + "30");
}

TEST(abc163_problemB, case2) {
	check(string("") + "10 2\n" + "5 6", string("") + "-1");
}

TEST(abc163_problemB, case3) {
	check(string("") + "11 2\n" + "5 6", string("") + "0");
}

TEST(abc163_problemB, case4) {
	check(string("") + "314 15\n" + "9 26 5 35 8 9 79 3 23 8 46 2 6 43 3", string("") + "9");
}
