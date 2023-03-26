#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc212_problemD, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1 3\n" + "1 5\n" + "3\n" + "2 2\n" + "3", string("") + "3\n" + "7");
}

TEST(abc212_problemD, case2) {
	check(PATH + COMMAND,
			string("") + "6\n" + "1 1000000000\n" + "2 1000000000\n" + "2 1000000000\n" + "2 1000000000\n"
					+ "2 1000000000\n" + "3", string("") + "5000000000");
}
