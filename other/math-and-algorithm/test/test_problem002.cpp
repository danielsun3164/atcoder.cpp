#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem002";
}

TEST(math_and_algorithm_problem002, case1) {
	check(string("") + "10 20 50", string("") + "80");
}

TEST(math_and_algorithm_problem002, case2) {
	check(string("") + "1 1 1", string("") + "3");
}

TEST(math_and_algorithm_problem002, case3) {
	check(string("") + "100 100 100", string("") + "300");
}
