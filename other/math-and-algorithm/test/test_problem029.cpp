#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem029";
}

TEST(math_and_algorithm_problem029, case1) {
	check(string("") + "4", string("") + "5");
}

TEST(math_and_algorithm_problem029, case2) {
	check(string("") + "45", string("") + "1836311903");
}
