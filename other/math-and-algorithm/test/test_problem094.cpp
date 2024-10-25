#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem094";
	EXTERNAL = "ABC140/C";
}

TEST(math_and_algorithm_problem094, case1) {
	check(string("") + "3\n" + "2 5", string("") + "9");
}

TEST(math_and_algorithm_problem094, case2) {
	check(string("") + "2\n" + "3", string("") + "6");
}

TEST(math_and_algorithm_problem094, case3) {
	check(string("") + "6\n" + "0 153 10 10 23", string("") + "53");
}
