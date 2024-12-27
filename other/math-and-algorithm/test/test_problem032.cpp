#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem032";
}

TEST(math_and_algorithm_problem032, case1) {
	check(string("") + "7 3\n" + "1 2 3 4 5 6 7", string("") + "Yes");
}

TEST(math_and_algorithm_problem032, case2) {
	check(string("") + "7 9\n" + "1 2 3 4 5 6 7", string("") + "No");
}

TEST(math_and_algorithm_problem032, case3) {
	check(string("") + "7 1\n" + "2 3 4 5 6 7 8", string("") + "No");
}
