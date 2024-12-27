#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem079";
	EXTERNAL = "ABC139/D";
}

TEST(math_and_algorithm_problem079, case1) {
	check(string("") + "2", string("") + "1");
}

TEST(math_and_algorithm_problem079, case2) {
	check(string("") + "13", string("") + "78");
}

TEST(math_and_algorithm_problem079, case3) {
	check(string("") + "1", string("") + "0");
}
