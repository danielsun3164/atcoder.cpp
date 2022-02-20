#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "5 3\n" + "1 2\n" + "2 3\n" + "1 3", string("") + "3");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "5 3\n" + "1 2\n" + "2 3\n" + "3 4", string("") + "2");
}

TEST(problemD, case3) {
	check(PATH + COMMAND,
			string("") + "7 9\n" + "1 2\n" + "1 3\n" + "2 3\n" + "4 5\n" + "4 6\n" + "4 7\n" + "5 6\n" + "5 7\n"
					+ "6 7", string("") + "4");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "12 0", string("") + "1");
}
