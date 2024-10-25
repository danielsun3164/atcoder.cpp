#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem030";
	EXTERNAL = "dp/D";
}

TEST(math_and_algorithm_problem030, case1) {
	check(string("") + "3 8\n" + "3 30\n" + "4 50\n" + "5 60", string("") + "90");
}

TEST(math_and_algorithm_problem030, case2) {
	check(string("") + "5 5\n" + "1 1000000000\n" + "1 1000000000\n" + "1 1000000000\n" +
			  "1 1000000000\n" + "1 1000000000",
		  string("") + "5000000000");
}

TEST(math_and_algorithm_problem030, case3) {
	check(string("") + "6 15\n" + "6 5\n" + "5 6\n" + "6 4\n" + "6 6\n" + "3 5\n" + "7 2",
		  string("") + "17");
}
