#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem032";

TEST(typical90_problem032, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 10 100\n" + "10 1 100\n" + "100 10 1\n" + "1\n" + "1 2",
			string("") + "111");
}

TEST(typical90_problem032, case2) {
	check(PATH + COMMAND,
			string("") + "4\n" + "1 2 3 4\n" + "5 6 7 8\n" + "9 10 11 12\n" + "13 14 15 16\n" + "3\n" + "1 2\n"
					+ "1 3\n" + "2 3", string("") + "-1");
}

TEST(typical90_problem032, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "1 10 100\n" + "10 1 100\n" + "100 10 1\n" + "0", string("") + "3");
}
