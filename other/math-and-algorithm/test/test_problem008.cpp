#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem008";
}

TEST(math_and_algorithm_problem008, case1) {
	check(string("") + "3 4", string("") + "6");
}

TEST(math_and_algorithm_problem008, case2) {
	check(string("") + "869 120", string("") + "7140");
}
