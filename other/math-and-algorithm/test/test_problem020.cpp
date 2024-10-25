#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem020";
}

TEST(math_and_algorithm_problem020, case1) {
	check(string("") + "5\n" + "100 150 200 250 300", string("") + "1");
}

TEST(math_and_algorithm_problem020, case2) {
	check(string("") + "13\n" + "243 156 104 280 142 286 196 132 128 195 265 300 130",
		  string("") + "4");
}
