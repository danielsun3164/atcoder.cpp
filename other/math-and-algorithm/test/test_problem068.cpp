#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem068";
}

TEST(math_and_algorithm_problem068, case1) {
	check(string("") + "100 3\n" + "2 3 5", string("") + "74");
}

TEST(math_and_algorithm_problem068, case2) {
	check(string("") + "100 3\n" + "2 4 6", string("") + "50");
}

TEST(math_and_algorithm_problem068, case3) {
	check(string("") + "10000000000000 10\n" + "13 17 19 23 29 31 37 41 43 47",
		  string("") + "3324865541894");
}
