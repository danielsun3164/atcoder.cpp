#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem012";
}

TEST(math_and_algorithm_problem012, case1) {
	check(string("") + "53", string("") + "Yes");
}

TEST(math_and_algorithm_problem012, case2) {
	check(string("") + "77", string("") + "No");
}

TEST(math_and_algorithm_problem012, case3) {
	check(string("") + "472249589291", string("") + "Yes");
}
