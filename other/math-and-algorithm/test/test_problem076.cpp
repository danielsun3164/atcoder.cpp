#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem076";
	EXTERNAL = "ABC186/D";
}

TEST(math_and_algorithm_problem076, case1) {
	check(string("") + "3\n" + "5 1 2", string("") + "8");
}

TEST(math_and_algorithm_problem076, case2) {
	check(string("") + "5\n" + "31 41 59 26 53", string("") + "176");
}
