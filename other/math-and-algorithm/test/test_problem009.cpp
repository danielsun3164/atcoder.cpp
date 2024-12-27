#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem009";
}

TEST(math_and_algorithm_problem009, case1) {
	check(string("") + "3 11\n" + "2 5 9", string("") + "Yes");
}

TEST(math_and_algorithm_problem009, case2) {
	check(string("") + "4 11\n" + "3 1 4 5", string("") + "No");
}
