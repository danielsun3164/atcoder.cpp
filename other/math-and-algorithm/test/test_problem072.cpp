#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem072";
}

TEST(math_and_algorithm_problem072, case1) {
	check(string("") + "2 4", string("") + "2");
}

TEST(math_and_algorithm_problem072, case2) {
	check(string("") + "199999 200000", string("") + "1");
}

TEST(math_and_algorithm_problem072, case3) {
	check(string("") + "101 139", string("") + "34");
}
