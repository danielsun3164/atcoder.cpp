#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem057";
}

TEST(typical90_problem057, case1) {
	check(string("") + "2 3\n" + "2\n" + "1 2\n" + "2\n" + "2 3\n" + "1 0 1", string("") + "1");
}

TEST(typical90_problem057, case2) {
	check(string("") + "2 3\n" + "1\n" + "1\n" + "1\n" + "2\n" + "0 1 1", string("") + "0");
}

TEST(typical90_problem057, case3) {
	check(string("") + "3 2\n" + "1\n" + "1\n" + "1\n" + "2\n" + "1\n" + "2\n" + "1 0", string("") + "2");
}

TEST(typical90_problem057, case4) {
	check(
			string("") + "13 6\n" + "3\n" + "1 3 5\n" + "3\n" + "1 4 5\n" + "4\n" + "3 4 5 6\n" + "2\n" + "2 5\n"
					+ "4\n" + "1 2 3 5\n" + "3\n" + "3 4 6\n" + "3\n" + "4 5 6\n" + "6\n" + "1 2 3 4 5 6\n" + "4\n"
					+ "1 3 5 6\n" + "3\n" + "1 2 4\n" + "3\n" + "1 5 6\n" + "4\n" + "1 2 3 4\n" + "1\n" + "5\n"
					+ "1 0 0 1 0 0", string("") + "128");
}
