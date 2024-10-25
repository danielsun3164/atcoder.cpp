#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem048";
	EXTERNAL = "ARC084/D";
}

TEST(math_and_algorithm_problem048, case1) {
	check(string("") + "6", string("") + "3");
}

TEST(math_and_algorithm_problem048, case2) {
	check(string("") + "41", string("") + "5");
}

TEST(math_and_algorithm_problem048, case3) {
	check(string("") + "79992", string("") + "36");
}
