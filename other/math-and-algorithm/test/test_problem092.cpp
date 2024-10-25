#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem092";
}

TEST(math_and_algorithm_problem092, case1) {
	check(string("") + "10", string("") + "14");
}

TEST(math_and_algorithm_problem092, case2) {
	check(string("") + "9", string("") + "12");
}

TEST(math_and_algorithm_problem092, case3) {
	check(string("") + "160", string("") + "52");
}

TEST(math_and_algorithm_problem092, case4) {
	check(string("") + "869120", string("") + "3732");
}

TEST(math_and_algorithm_problem092, case5) {
	check(string("") + "2147483647", string("") + "4294967296");
}
