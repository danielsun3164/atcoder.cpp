#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem045別回答";

TEST(typical90_problem045別回答, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 1\n" + "1 2\n" + "2 0", string("") + "2");
}

TEST(typical90_problem045別回答, case2) {
	check(PATH + COMMAND, string("") + "5 3\n" + "0 0\n" + "1 1\n" + "0 2\n" + "2 3\n" + "3 1", string("") + "4");
}

TEST(typical90_problem045別回答, case3) {
	check(PATH + COMMAND,
			string("") + "10 4\n" + "0 3\n" + "3 5\n" + "2 7\n" + "9 0\n" + "5 6\n" + "4 3\n" + "7 8\n" + "6 5\n"
					+ "9 9\n" + "2 1", string("") + "20");
}

TEST(typical90_problem045別回答, case4) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 0\n" + "500000000 500000000\n" + "1000000000 1000000000",
			string("") + "500000000000000000");
}
