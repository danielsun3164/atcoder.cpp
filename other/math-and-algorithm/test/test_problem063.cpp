#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem063";
}

TEST(math_and_algorithm_problem063, case1) {
	check(string("") + "2", string("") + "Yes");
}

TEST(math_and_algorithm_problem063, case2) {
	check(string("") + "3", string("") + "No");
}
