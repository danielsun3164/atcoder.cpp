#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem045";
	EXTERNAL = "typical90/078";
}

TEST(math_and_algorithm_problem045, case1) {
	check(string("") + "5 5\n" + "1 2\n" + "1 3\n" + "3 2\n" + "5 2\n" + "4 2", string("") + "3");
}

TEST(math_and_algorithm_problem045, case2) {
	check(string("") + "2 1\n" + "1 2", string("") + "1");
}

TEST(math_and_algorithm_problem045, case3) {
	check(string("") + "7 18\n" + "7 2\n" + "1 6\n" + "5 2\n" + "1 3\n" + "7 6\n" + "5 3\n" +
			  "5 6\n" + "5 4\n" + "1 7\n" + "2 6\n" + "3 4\n" + "5 1\n" + "4 7\n" + "4 6\n" +
			  "5 7\n" + "3 2\n" + "4 2\n" + "1 4",
		  string("") + "0");
}
