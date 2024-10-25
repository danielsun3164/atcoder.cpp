#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem034";
	TOLERANCE = 1E-9;
}

TEST(math_and_algorithm_problem034, case1) {
	check_about(string("") + "4\n" + "0 1\n" + "2 0\n" + "2 3\n" + "3 1",
				1.4142135623730950488016887242);
}
