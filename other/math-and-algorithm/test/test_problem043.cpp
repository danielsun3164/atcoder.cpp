#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem043";
}

TEST(math_and_algorithm_problem043, case1) {
	check(string("") + "3 2\n" + "1 3\n" + "2 3", string("") + "The graph is connected.");
}

TEST(math_and_algorithm_problem043, case2) {
	check(string("") + "6 6\n" + "1 4\n" + "2 3\n" + "3 4\n" + "5 6\n" + "1 2\n" + "2 4",
		  string("") + "The graph is not connected.");
}
