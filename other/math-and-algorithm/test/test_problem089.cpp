#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem089";
}

TEST(math_and_algorithm_problem089, case1) {
	check(string("") + "4 3 2", string("") + "Yes");
}

TEST(math_and_algorithm_problem089, case2) {
	check(string("") + "16 3 2", string("") + "No");
}

TEST(math_and_algorithm_problem089, case3) {
	check(string("") + "8 3 2", string("") + "No");
}

TEST(math_and_algorithm_problem089, case4) {
	check(string("") + "1000000000000000000 1000000000000000000 1000000000000000000",
		  string("") + "Yes");
}

TEST(math_and_algorithm_problem089, case5) {
	check(string("") + "869120 5 15", string("") + "No");
}
