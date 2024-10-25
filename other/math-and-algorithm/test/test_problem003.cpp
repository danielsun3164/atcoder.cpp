#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem003";
}

TEST(math_and_algorithm_problem003, case1) {
	check(string("") + "5\n" + "3 1 4 1 5", string("") + "14");
}

TEST(math_and_algorithm_problem003, case2) {
	check(string("") + "3\n" + "10 20 50", string("") + "80");
}

TEST(math_and_algorithm_problem003, case3) {
	check(string("") + "10\n" + "1 2 3 4 5 6 7 8 9 10", string("") + "55");
}
