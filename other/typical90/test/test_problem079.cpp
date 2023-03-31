#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem079";
}

TEST(typical90_problem079, case1) {
	check(string("") + "3 3\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0\n" + "1 1 0\n" + "1 1 0\n" + "0 0 0",
			string("") + "Yes\n" + "1");
}

TEST(typical90_problem079, case2) {
	check(string("") + "3 3\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0\n" + "0 1 0\n" + "0 0 0",
			string("") + "No");
}

TEST(typical90_problem079, case3) {
	check(
			string("") + "5 5\n" + "6 17 18 29 22\n" + "39 50 25 39 25\n" + "34 34 8 25 17\n" + "28 48 25 47 42\n"
					+ "27 47 24 32 28\n" + "4 6 3 29 28\n" + "48 50 21 48 29\n" + "44 44 19 47 28\n" + "4 49 46 29 28\n"
					+ "4 49 45 1 1", string("") + "Yes\n" + "140");
}
