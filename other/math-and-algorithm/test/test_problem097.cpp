#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem097";
}

TEST(math_and_algorithm_problem097, case1) {
	check(string("") + "21 40", string("") + "4");
}

TEST(math_and_algorithm_problem097, case2) {
	check(string("") + "101 130", string("") + "6");
}

TEST(math_and_algorithm_problem097, case3) {
	check(string("") + "1 100", string("") + "25");
}

TEST(math_and_algorithm_problem097, case4) {
	check(string("") + "217 217", string("") + "0");
}

TEST(math_and_algorithm_problem097, case5) {
	check(string("") + "999999500000 1000000000000", string("") + "18228");
}
