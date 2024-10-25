#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem096";
	EXTERNAL = "abc204/D";
}

TEST(math_and_algorithm_problem096, case1) {
	check(string("") + "5\n" + "8 3 7 2 5", string("") + "13");
}

TEST(math_and_algorithm_problem096, case2) {
	check(string("") + "2\n" + "1000 1", string("") + "1000");
}

TEST(math_and_algorithm_problem096, case3) {
	check(string("") + "9\n" + "3 14 15 9 26 5 35 89 79", string("") + "138");
}
