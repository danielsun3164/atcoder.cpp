#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem023";
	TOLERANCE = 1E-6;
}

TEST(math_and_algorithm_problem023, case1) {
	check_about(string("") + "3\n" + "1 2 3\n" + "10 20 30", 22.0);
}
