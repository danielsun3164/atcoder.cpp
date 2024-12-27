#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem058";
}

TEST(math_and_algorithm_problem058, case1) {
	check(string("") + "10 2 2", string("") + "Yes");
}

TEST(math_and_algorithm_problem058, case2) {
	check(string("") + "9 3 1", string("") + "No");
}
