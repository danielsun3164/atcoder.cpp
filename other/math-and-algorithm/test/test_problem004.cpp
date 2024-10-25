#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem004";
}

TEST(math_and_algorithm_problem004, case1) {
	check(string("") + "2 8 8", string("") + "128");
}

TEST(math_and_algorithm_problem004, case2) {
	check(string("") + "7 7 25", string("") + "1225");
}

TEST(math_and_algorithm_problem004, case3) {
	check(string("") + "100 100 100", string("") + "1000000");
}
