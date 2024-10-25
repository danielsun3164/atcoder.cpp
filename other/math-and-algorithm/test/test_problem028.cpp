#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem028";
	EXTERNAL = "dp/A";
}

TEST(math_and_algorithm_problem028, case1) {
	check(string("") + "4\n" + "10 30 40 20", string("") + "30");
}

TEST(math_and_algorithm_problem028, case2) {
	check(string("") + "2\n" + "10 10", string("") + "0");
}

TEST(math_and_algorithm_problem028, case3) {
	check(string("") + "6\n" + "30 10 60 10 60 50", string("") + "40");
}
