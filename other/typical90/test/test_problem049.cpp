#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem049";
}

TEST(typical90_problem049, case1) {
	check(string("") + "2 3\n" + "1 1 1\n" + "1 2 2\n" + "10 1 2", string("") + "2");
}

TEST(typical90_problem049, case2) {
	check(string("") + "2 3\n" + "1 1 1\n" + "10 2 2\n" + "1 1 2", string("") + "2");
}

TEST(typical90_problem049, case3) {
	check(string("") + "4 5\n" + "3 1 2\n" + "5 2 4\n" + "9 3 4\n" + "4 1 4\n" + "8 2 4", string("") + "-1");
}

TEST(typical90_problem049, case4) {
	check(
			string("") + "9 11\n" + "10 2 7\n" + "100 1 6\n" + "1 2 8\n" + "39 4 5\n" + "62 3 4\n" + "81 1 3\n"
					+ "55 8 8\n" + "91 5 5\n" + "14 8 9\n" + "37 5 5\n" + "41 7 9", string("") + "385");
}
