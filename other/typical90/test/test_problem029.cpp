#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem029";

TEST(typical90_problem029, case1) {
	check(PATH + COMMAND, string("") + "100 4\n" + "27 100\n" + "8 39\n" + "83 97\n" + "24 75",
			string("") + "1\n" + "2\n" + "2\n" + "3");
}

TEST(typical90_problem029, case2) {
	check(PATH + COMMAND, string("") + "3 5\n" + "1 2\n" + "2 2\n" + "2 3\n" + "3 3\n" + "1 2",
			string("") + "1\n" + "2\n" + "3\n" + "4\n" + "4");
}

TEST(typical90_problem029, case3) {
	check(PATH + COMMAND,
			string("") + "10 10\n" + "1 3\n" + "3 5\n" + "5 7\n" + "7 9\n" + "2 4\n" + "4 6\n" + "6 8\n" + "3 5\n"
					+ "5 7\n" + "4 6",
			string("") + "1\n" + "2\n" + "3\n" + "4\n" + "3\n" + "4\n" + "5\n" + "5\n" + "6\n" + "7");
}

TEST(typical90_problem029, case4) {
	check(PATH + COMMAND,
			string("") + "500000 7\n" + "1 500000\n" + "500000 500000\n" + "1 500000\n" + "1 1\n" + "1 500000\n"
					+ "500000 500000\n" + "1 500000", string("") + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7");
}
