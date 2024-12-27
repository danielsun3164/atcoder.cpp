#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem055";
}

TEST(math_and_algorithm_problem055, case1) {
	check(string("") + "10", string("") + "1393");
}

TEST(math_and_algorithm_problem055, case2) {
	check(string("") + "876543210987654321", string("") + "841102483");
}
