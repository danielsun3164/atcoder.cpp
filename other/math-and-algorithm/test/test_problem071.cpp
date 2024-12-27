#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem071";
	TOLERANCE = 1E-6;
}

TEST(math_and_algorithm_problem071, case1) {
	check_about(string("") + "2\n" + "1 3 3\n" + "3 1 3", 1.5);
}
