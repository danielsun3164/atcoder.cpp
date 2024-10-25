#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem033";
	TOLERANCE = 1E-6;
}

TEST(math_and_algorithm_problem033, case1) {
	check_about(string("") + "0 5\n" + "1 1\n" + "3 0", 4.123105625618);
}

TEST(math_and_algorithm_problem033, case2) {
	check_about(string("") + "-40 -30\n" + "-50 -10\n" + "-20 -20", 15.811388300842);
}

TEST(math_and_algorithm_problem033, case3) {
	check_about(
		string("") + "1000000000 1000000000\n" + "-1000000000 -1000000000\n" + "0 -1000000000",
		2236067977.499789714813);
}
