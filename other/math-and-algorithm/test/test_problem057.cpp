#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem057";
}

TEST(math_and_algorithm_problem057, case1) {
	check(string("") + "2 6", string("") + "13");
}

TEST(math_and_algorithm_problem057, case2) {
	check(string("") + "3 8", string("") + "153");
}

TEST(math_and_algorithm_problem057, case3) {
	check(string("") + "4 7", string("") + "781");
}
