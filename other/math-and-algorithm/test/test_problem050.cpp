#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem050";
}

TEST(math_and_algorithm_problem050, case1) {
	check(string("") + "5 23", string("") + "871631629");
}

TEST(math_and_algorithm_problem050, case2) {
	check(string("") + "97 998244353", string("") + "934801994");
}
