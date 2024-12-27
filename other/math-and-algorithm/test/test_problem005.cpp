#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem005";
}

TEST(math_and_algorithm_problem005, case1) {
	check(string("") + "3\n" + "30 50 70", string("") + "50");
}

TEST(math_and_algorithm_problem005, case2) {
	check(string("") + "10\n" + "1 2 3 4 5 6 7 8 9 10", string("") + "55");
}

TEST(math_and_algorithm_problem005, case3) {
	check(string("") + "5\n" + "60 60 60 60 60", string("") + "0");
}
