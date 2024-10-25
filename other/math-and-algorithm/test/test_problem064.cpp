#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem064";
}

TEST(math_and_algorithm_problem064, case1) {
	check(string("") + "3 3\n" + "2 0 1", string("") + "Yes");
}

TEST(math_and_algorithm_problem064, case2) {
	check(string("") + "5 2\n" + "1 0 0 0 0", string("") + "No");
}
