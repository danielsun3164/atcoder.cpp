#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc215/B";
}

TEST(abc215_problemB, case1) {
	check(string("") + "6", string("") + "2");
}

TEST(abc215_problemB, case2) {
	check(string("") + "1", string("") + "0");
}

TEST(abc215_problemB, case3) {
	check(string("") + "1000000000000000000", string("") + "59");
}
