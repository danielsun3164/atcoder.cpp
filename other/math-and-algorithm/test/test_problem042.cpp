#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem042";
	EXTERNAL = "ABC172/D";
}

TEST(math_and_algorithm_problem042, case1) {
	check(string("") + "4", string("") + "23");
}

TEST(math_and_algorithm_problem042, case2) {
	check(string("") + "100", string("") + "26879");
}

TEST(math_and_algorithm_problem042, case3) {
	check(string("") + "10000000", string("") + "838627288460105");
}
