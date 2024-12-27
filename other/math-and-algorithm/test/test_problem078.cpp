#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem078";
}

TEST(math_and_algorithm_problem078, case1) {
	check(string("") + "6 7\n" + "1 2\n" + "1 3\n" + "2 4\n" + "2 5\n" + "3 4\n" + "4 6\n" + "5 6",
		  string("") + "0\n" + "1\n" + "1\n" + "2\n" + "2\n" + "3");
}
