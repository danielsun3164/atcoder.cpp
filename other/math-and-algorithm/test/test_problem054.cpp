#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem054";
}

TEST(math_and_algorithm_problem054, case1) {
	check(string("") + "10", string("") + "55");
}

TEST(math_and_algorithm_problem054, case2) {
	check(string("") + "876543210987654321", string("") + "942619746");
}
