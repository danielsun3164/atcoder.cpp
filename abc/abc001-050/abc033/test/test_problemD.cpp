#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc033_problemD, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1 3\n" + "2 2\n" + "3 2\n" + "4 1\n" + "4 3", string("") + "1 2 7");
}

TEST(abc033_problemD, case2) {
	check(PATH + COMMAND,
			string("") + "9\n" + "2 0\n" + "1 1\n" + "3 1\n" + "1 2\n" + "5 2\n" + "0 3\n" + "4 3\n" + "2 4\n" + "4 4",
			string("") + "27 14 43");
}
