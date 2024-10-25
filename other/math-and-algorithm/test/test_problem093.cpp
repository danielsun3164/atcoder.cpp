#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem093";
	EXTERNAL = "typical90/038";
}

TEST(math_and_algorithm_problem093, case1) {
	check(string("") + "4 6", string("") + "12");
}

TEST(math_and_algorithm_problem093, case2) {
	check(string("") + "1000000000000000000 3", string("") + "Large");
}

TEST(math_and_algorithm_problem093, case3) {
	check(string("") + "1000000000000000000 1", string("") + "1000000000000000000");
}
