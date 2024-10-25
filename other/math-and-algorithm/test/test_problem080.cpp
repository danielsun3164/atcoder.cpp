#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem080";
}

TEST(math_and_algorithm_problem080, case1) {
	check(string("") + "4 4\n" + "1 2 3\n" + "1 3 4\n" + "3 4 1\n" + "2 4 10", string("") + "5");
}

TEST(math_and_algorithm_problem080, case2) {
	check(string("") + "2 0", string("") + "-1");
}
