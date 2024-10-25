#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem024";
	TOLERANCE = 1E-6;
}

TEST(math_and_algorithm_problem024, case1) {
	check_about(string("") + "2\n" + "2 50\n" + "4 100", 50.0);
}
