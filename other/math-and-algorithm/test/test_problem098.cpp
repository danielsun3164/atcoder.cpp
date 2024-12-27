#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem098";
}

TEST(math_and_algorithm_problem098, case1) {
	check(string("") + "4\n" + "0 0\n" + "3 1\n" + "2 3\n" + "0 3\n" + "2 1",
		  string("") + "INSIDE");
}

TEST(math_and_algorithm_problem098, case2) {
	check(string("") + "4\n" + "3 1\n" + "0 0\n" + "0 3\n" + "2 3\n" + "3 2",
		  string("") + "OUTSIDE");
}

TEST(math_and_algorithm_problem098, case3) {
	check(string("") + "6\n" + "5 5\n" + "-1 -3\n" + "5 1\n" + "-3 -5\n" + "1 1\n" + "-5 -3\n" +
			  "0 -1",
		  string("") + "INSIDE");
}

TEST(math_and_algorithm_problem098, case4) {
	check(string("") + "16\n" + "0 0\n" + "8 0\n" + "8 7\n" + "7 7\n" + "7 1\n" + "1 1\n" +
			  "1 6\n" + "5 6\n" + "5 3\n" + "3 3\n" + "3 5\n" + "2 5\n" + "2 2\n" + "6 2\n" +
			  "6 7\n" + "0 7\n" + "4 4",
		  string("") + "OUTSIDE");
}

TEST(math_and_algorithm_problem098, case5) {
	check(string("") + "3\n" + "0 0\n" + "1000000000 671903261\n" + "671903261 1000000000\n" +
			  "520908341 350000013",
		  string("") + "OUTSIDE");
}
