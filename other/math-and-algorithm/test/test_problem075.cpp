#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem075";
}

TEST(math_and_algorithm_problem075, case1) {
	check(string("") + "5\n" + "20 22 25 43 50", string("") + "480");
}
