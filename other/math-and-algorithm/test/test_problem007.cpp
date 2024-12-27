#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem007";
}

TEST(math_and_algorithm_problem007, case1) {
	check(string("") + "15 3 5", string("") + "7");
}

TEST(math_and_algorithm_problem007, case2) {
	check(string("") + "1000000 11 13", string("") + "160839");
}
