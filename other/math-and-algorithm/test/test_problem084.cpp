#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem084";
	EXTERNAL = "2020_panasonic/C";
}

TEST(math_and_algorithm_problem084, case1) {
	check(string("") + "2 3 9", string("") + "No");
}

TEST(math_and_algorithm_problem084, case2) {
	check(string("") + "2 3 10", string("") + "Yes");
}
