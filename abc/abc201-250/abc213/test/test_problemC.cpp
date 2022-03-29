#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "4 5 2\n" + "3 2\n" + "2 5", string("") + "2 1\n" + "1 2");
}

TEST(problemC, case2) {
	check(PATH + COMMAND,
			string("") + "1000000000 1000000000 10\n" + "1 1\n" + "10 10\n" + "100 100\n" + "1000 1000\n"
					+ "10000 10000\n" + "100000 100000\n" + "1000000 1000000\n" + "10000000 10000000\n"
					+ "100000000 100000000\n" + "1000000000 1000000000",
			string("") + "1 1\n" + "2 2\n" + "3 3\n" + "4 4\n" + "5 5\n" + "6 6\n" + "7 7\n" + "8 8\n" + "9 9\n"
					+ "10 10");
}
