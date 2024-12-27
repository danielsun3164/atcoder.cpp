#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc225/H";
}

TEST(abc225_problemH, case1) {
	check(string("") + "5 3 2\n" + "1 3", string("") + "7");
}

TEST(abc225_problemH, case2) {
	check(string("") + "6 6 1\n" + "4", string("") + "120");
}

TEST(abc225_problemH, case3) {
	check(string("") + "99 10 3\n" + "10 50 90", string("") + "761621047");
}
