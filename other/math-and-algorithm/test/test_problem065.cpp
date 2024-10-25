#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem065";
	EXTERNAL = "2020_panasonic/B";
}

TEST(math_and_algorithm_problem065, case1) {
	check(string("") + "4 5", string("") + "10");
}

TEST(math_and_algorithm_problem065, case2) {
	check(string("") + "7 3", string("") + "11");
}

TEST(math_and_algorithm_problem065, case3) {
	check(string("") + "1000000000 1000000000", string("") + "500000000000000000");
}
