#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem069";
	EXTERNAL = "ABC178/B";
}

TEST(math_and_algorithm_problem069, case1) {
	check(string("") + "1 2 1 1", string("") + "2");
}

TEST(math_and_algorithm_problem069, case2) {
	check(string("") + "3 5 -4 -2", string("") + "-6");
}

TEST(math_and_algorithm_problem069, case3) {
	check(string("") + "-1000000000 0 -1000000000 0", string("") + "1000000000000000000");
}
