#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem001";
}

TEST(math_and_algorithm_problem001, case1) {
	check(string("") + "2", string("") + "7");
}

TEST(math_and_algorithm_problem001, case2) {
	check(string("") + "4", string("") + "9");
}

TEST(math_and_algorithm_problem001, case3) {
	check(string("") + "8", string("") + "13");
}
