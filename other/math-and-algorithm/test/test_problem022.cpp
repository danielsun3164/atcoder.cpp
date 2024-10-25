#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem022";
}

TEST(math_and_algorithm_problem022, case1) {
	check(string("") + "6\n" + "40000 50000 20000 80000 50000 30000", string("") + "2");
}
