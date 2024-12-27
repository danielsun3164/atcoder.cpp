#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem037";
}

TEST(math_and_algorithm_problem037, case1) {
	check(string("") + "1 1\n" + "2 2\n" + "1 2\n" + "2 1", string("") + "Yes");
}

TEST(math_and_algorithm_problem037, case2) {
	check(string("") + "1 2\n" + "2 2\n" + "1 1\n" + "1 3", string("") + "Yes");
}

TEST(math_and_algorithm_problem037, case3) {
	check(string("") + "100000001 200000000\n" + "200000000 200000000\n" + "100000000 100000000\n" +
			  "100000000 300000000",
		  string("") + "No");
}

TEST(math_and_algorithm_problem037, case4) {
	check(string("") + "1 1\n" + "3 3\n" + "2 2\n" + "4 4", string("") + "Yes");
}

TEST(math_and_algorithm_problem037, case5) {
	check(string("") + "4 1\n" + "3 2\n" + "2 3\n" + "1 4", string("") + "No");
}
