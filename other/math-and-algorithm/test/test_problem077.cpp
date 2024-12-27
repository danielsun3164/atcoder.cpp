#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem077";
}

TEST(math_and_algorithm_problem077, case1) {
	check(string("") + "2\n" + "1 2\n" + "10 20", string("") + "27");
}
