#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc242/B";
}

TEST(abc242_problemB, case1) {
	check(string("") + "aba", string("") + "aab");
}

TEST(abc242_problemB, case2) {
	check(string("") + "zzzz", string("") + "zzzz");
}
