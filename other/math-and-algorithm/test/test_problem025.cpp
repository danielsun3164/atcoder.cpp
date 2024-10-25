#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem025";
	TOLERANCE = 1E-6;
}

TEST(math_and_algorithm_problem025, case1) {
	check_about(string("") + "5\n" + "3 1 4 1 5\n" + "9 2 6 5 3", 21.333333333333);
}
