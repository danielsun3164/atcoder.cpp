#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem006";
}

TEST(typical90_problem006, case1) {
	check(string("") + "7 3\n" + "atcoder", string("") + "acd");
}

TEST(typical90_problem006, case2) {
	check(string("") + "14 5\n" + "kittyonyourlap", string("") + "inlap");
}
