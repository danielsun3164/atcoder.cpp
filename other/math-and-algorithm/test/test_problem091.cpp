#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem091";
}

TEST(math_and_algorithm_problem091, case1) {
	check(string("") + "5 9", string("") + "2");
}

TEST(math_and_algorithm_problem091, case2) {
	check(string("") + "8 16", string("") + "5");
}

TEST(math_and_algorithm_problem091, case3) {
	check(string("") + "3 20", string("") + "0");
}

TEST(math_and_algorithm_problem091, case4) {
	check(string("") + "29 47", string("") + "97");
}

TEST(math_and_algorithm_problem091, case5) {
	check(string("") + "100 160", string("") + "1213");
}
