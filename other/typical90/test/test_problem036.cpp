#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem036";
}

TEST(typical90_problem036, case1) {
	check(string("") + "3 3\n" + "-1 2\n" + "1 1\n" + "-2 -3\n" + "1\n" + "2\n" + "3",
			string("") + "6\n" + "7\n" + "7");
}

TEST(typical90_problem036, case2) {
	check(string("") + "5 3\n" + "-2 -2\n" + "-1 -1\n" + "0 0\n" + "1 1\n" + "2 2\n" + "5\n" + "3\n" + "1",
			string("") + "8\n" + "4\n" + "8");
}

TEST(typical90_problem036, case3) {
	check(string("") + "2 1\n" + "-1000000000 -1000000000\n" + "1000000000 1000000000\n" + "1",
			string("") + "4000000000");
}
