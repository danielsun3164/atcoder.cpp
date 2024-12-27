#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem040";
}

TEST(math_and_algorithm_problem040, case1) {
	check(string("") + "4\n" + "8 6 9\n" + "6\n" + "2\n" + "1\n" + "3\n" + "2\n" + "3\n" + "4",
		  string("") + "43");
}
