#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem056";
}

TEST(math_and_algorithm_problem056, case1) {
	check(string("") + "10", string("") + "149");
}

TEST(math_and_algorithm_problem056, case2) {
	check(string("") + "876543210987654321", string("") + "639479200");
}
