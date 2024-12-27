#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem038";
}

TEST(math_and_algorithm_problem038, case1) {
	check(string("") + "10 5\n" + "8 6 9 1 2 1 10 100 1000 10000\n" + "2 3\n" + "1 4\n" + "3 9\n" +
			  "6 8\n" + "1 10",
		  string("") + "15\n" + "24\n" + "1123\n" + "111\n" + "11137");
}
