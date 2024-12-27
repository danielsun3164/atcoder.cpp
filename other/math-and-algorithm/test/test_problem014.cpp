#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem014";
}

TEST(math_and_algorithm_problem014, case1) {
	check(string("") + "10", string("") + "2 5");
}

TEST(math_and_algorithm_problem014, case2) {
	check(string("") + "36", string("") + "2 2 3 3");
}
