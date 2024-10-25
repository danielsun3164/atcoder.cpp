#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem047";
}

TEST(math_and_algorithm_problem047, case1) {
	check(string("") + "8 7\n" + "1 5\n" + "1 6\n" + "2 7\n" + "3 7\n" + "4 6\n" + "5 8\n" + "6 8",
		  string("") + "Yes");
}

TEST(math_and_algorithm_problem047, case2) {
	check(string("") + "6 7\n" + "1 6\n" + "2 6\n" + "3 6\n" + "2 4\n" + "3 5\n" + "1 3\n" + "1 4",
		  string("") + "No");
}
