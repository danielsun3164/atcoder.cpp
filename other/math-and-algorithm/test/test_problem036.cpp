#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem036";
	EXTERNAL = "ABC168/C";
	TOLERANCE = 1E-9;
}

TEST(math_and_algorithm_problem036, case1) {
	check_about(string("") + "3 4 9 0", 5.0);
}

TEST(math_and_algorithm_problem036, case2) {
	check_about(string("") + "3 4 10 40", 4.56425719433005567605);
}
