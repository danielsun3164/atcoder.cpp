#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem041";
}

TEST(math_and_algorithm_problem041, case1) {
	check(string("") + "10\n" + "7\n" + "0 3\n" + "2 4\n" + "1 3\n" + "0 3\n" + "5 6\n" + "5 6\n" +
			  "5 6",
		  string("") + "2\n" + "3\n" + "4\n" + "1\n" + "0\n" + "3\n" + "0\n" + "0\n" + "0\n" + "0");
}
