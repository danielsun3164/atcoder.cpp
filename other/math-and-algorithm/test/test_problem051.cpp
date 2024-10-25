#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem051";
}

TEST(math_and_algorithm_problem051, case1) {
	check(string("") + "1 2", string("") + "3");
}

TEST(math_and_algorithm_problem051, case2) {
	check(string("") + "869 120", string("") + "445891023");
}
