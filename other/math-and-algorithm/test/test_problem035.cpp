#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem035";
}

TEST(math_and_algorithm_problem035, case1) {
	check(string("") + "4 1 2\n" + "1 5 3", string("") + "4");
}

TEST(math_and_algorithm_problem035, case2) {
	check(string("") + "1 1 6\n" + "3 3 2", string("") + "1");
}

TEST(math_and_algorithm_problem035, case3) {
	check(string("") + "6 6 6\n" + "6 6 6", string("") + "2");
}
