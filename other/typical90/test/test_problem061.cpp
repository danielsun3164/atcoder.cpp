#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem061";

TEST(typical90_problem061, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 2\n" + "1 1\n" + "2 3\n" + "3 1\n" + "3 2\n" + "3 3",
			string("") + "1\n" + "2\n" + "3");
}

TEST(typical90_problem061, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "2 1\n" + "3 1\n" + "2 2\n" + "3 1\n" + "2 3\n" + "3 1",
			string("") + "1\n" + "1\n" + "1");
}

TEST(typical90_problem061, case3) {
	check(PATH + COMMAND,
			string("") + "6\n" + "1 1000000000\n" + "2 200000000\n" + "1 30000000\n" + "2 4000000\n" + "1 500000\n"
					+ "3 3", string("") + "1000000000");
}
