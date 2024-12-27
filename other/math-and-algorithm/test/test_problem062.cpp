#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem062";
	EXTERNAL = "ABC167/D";
}

TEST(math_and_algorithm_problem062, case1) {
	check(string("") + "4 5\n" + "3 2 4 1", string("") + "4");
}

TEST(math_and_algorithm_problem062, case2) {
	check(string("") + "6 727202214173249351\n" + "6 5 2 5 3 2", string("") + "2");
}
