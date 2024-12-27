#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem018";
}

TEST(math_and_algorithm_problem018, case1) {
	check(string("") + "5\n" + "100 300 400 400 200", string("") + "3");
}
