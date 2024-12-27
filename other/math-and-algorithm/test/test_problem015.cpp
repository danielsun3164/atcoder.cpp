#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem015";
}

TEST(math_and_algorithm_problem015, case1) {
	check(string("") + "33 88", string("") + "11");
}

TEST(math_and_algorithm_problem015, case2) {
	check(string("") + "123 777", string("") + "3");
}
