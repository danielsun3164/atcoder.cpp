#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem070";
}

TEST(math_and_algorithm_problem070, case1) {
	check(string("") + "4 4\n" + "1 4\n" + "3 3\n" + "6 2\n" + "8 1", string("") + "21");
}

TEST(math_and_algorithm_problem070, case2) {
	check(string("") + "4 2\n" + "0 0\n" + "1 1\n" + "2 2\n" + "3 3", string("") + "1");
}

TEST(math_and_algorithm_problem070, case3) {
	check(string("") + "4 3\n" + "-1000000000 -1000000000\n" + "1000000000 1000000000\n" +
			  "-999999999 999999999\n" + "999999999 -999999999",
		  string("") + "3999999996000000001");
}
