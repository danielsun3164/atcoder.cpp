#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc230/B";
}

TEST(abc230_problemB, case1) {
	check(string("") + "xoxxoxxo", string("") + "Yes");
}

TEST(abc230_problemB, case2) {
	check(string("") + "xxoxxoxo", string("") + "No");
}

TEST(abc230_problemB, case3) {
	check(string("") + "ox", string("") + "Yes");
}
