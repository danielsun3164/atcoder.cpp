#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem085";
}

TEST(math_and_algorithm_problem085, case1) {
	check(string("") + "6 11 30", string("") + "Yes");
}

TEST(math_and_algorithm_problem085, case2) {
	check(string("") + "1 1000000000 1", string("") + "No");
}
