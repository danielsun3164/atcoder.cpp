#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem027";
}

TEST(math_and_algorithm_problem027, case1) {
	check(string("") + "3\n" + "3 1 2", string("") + "1 2 3");
}

TEST(math_and_algorithm_problem027, case2) {
	check(string("") + "10\n" + "658 299 47 507 122 969 449 68 513 800",
		  string("") + "47 68 122 299 449 507 513 658 800 969");
}
