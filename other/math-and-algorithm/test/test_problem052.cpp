#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem052";
	EXTERNAL = "ABC145/D";
}

TEST(math_and_algorithm_problem052, case1) {
	check(string("") + "3 3", string("") + "2");
}

TEST(math_and_algorithm_problem052, case2) {
	check(string("") + "2 2", string("") + "0");
}

TEST(math_and_algorithm_problem052, case3) {
	check(string("") + "999999 999999", string("") + "151840682");
}
