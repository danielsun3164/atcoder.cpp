#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem039";
}

TEST(math_and_algorithm_problem039, case1) {
	check(string("") + "5 3\n" + "1 2 3\n" + "2 5 4\n" + "2 4 1", string("") + "<>=>");
}

TEST(math_and_algorithm_problem039, case2) {
	check(string("") + "10 10\n" + "1 1 1\n" + "6 7 28\n" + "3 5 4096\n" + "6 10 2000\n" +
			  "1 10 10000\n" + "2 8 2\n" + "10 10 2\n" + "1 2 8000\n" + "6 7 20\n" + "6 8 2048",
		  string("") + "<>====>><");
}
