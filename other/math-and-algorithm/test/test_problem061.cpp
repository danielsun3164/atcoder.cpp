#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem061";
}

TEST(math_and_algorithm_problem061, case1) {
	check(string("") + "2", string("") + "First");
}

TEST(math_and_algorithm_problem061, case2) {
	check(string("") + "3", string("") + "Second");
}

TEST(math_and_algorithm_problem061, case3) {
	check(string("") + "1000000000000000000", string("") + "First");
}
