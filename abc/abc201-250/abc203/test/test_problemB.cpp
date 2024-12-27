#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc203/B";
}

TEST(abc203_problemB, case1) {
	check(string("") + "1 2", string("") + "203");
}

TEST(abc203_problemB, case2) {
	check(string("") + "3 3", string("") + "1818");
}
