#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem086";
}

TEST(math_and_algorithm_problem086, case1) {
	check(string("") + "8\n" + "(()())()", string("") + "Yes");
}

TEST(math_and_algorithm_problem086, case2) {
	check(string("") + "6\n" + "))()((", string("") + "No");
}
