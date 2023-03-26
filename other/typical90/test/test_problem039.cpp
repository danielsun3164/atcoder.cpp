#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem039";

TEST(typical90_problem039, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 2", string("") + "1");
}

TEST(typical90_problem039, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2\n" + "1 3\n" + "1 4", string("") + "9");
}

TEST(typical90_problem039, case3) {
	check(PATH + COMMAND,
			string("") + "12\n" + "1 2\n" + "3 1\n" + "4 2\n" + "2 5\n" + "3 6\n" + "3 7\n" + "8 4\n" + "4 9\n"
					+ "10 5\n" + "11 7\n" + "7 12", string("") + "211");
}
