#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc248/B";
}

TEST(abc248_problemB, case1) {
	check(string("") + "1 4 2", string("") + "2");
}

TEST(abc248_problemB, case2) {
	check(string("") + "7 7 10", string("") + "0");
}

TEST(abc248_problemB, case3) {
	check(string("") + "31 415926 5", string("") + "6");
}
