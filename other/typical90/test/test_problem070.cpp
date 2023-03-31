#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem070";
}

TEST(typical90_problem070, case1) {
	check(string("") + "2\n" + "-1 2\n" + "1 1", string("") + "3");
}

TEST(typical90_problem070, case2) {
	check(string("") + "2\n" + "1 0\n" + "0 1", string("") + "2");
}

TEST(typical90_problem070, case3) {
	check(string("") + "5\n" + "2 5\n" + "2 5\n" + "-3 4\n" + "-4 -8\n" + "6 -2", string("") + "35");
}

TEST(typical90_problem070, case4) {
	check(
			string("") + "4\n" + "1000000000 1000000000\n" + "-1000000000 1000000000\n" + "-1000000000 -1000000000\n"
					+ "1000000000 -1000000000", string("") + "8000000000");
}
