#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2\n" + "2 3\n" + "1\n" + "1 3", string("") + "3");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "1 2\n" + "1\n" + "1 2", string("") + "1");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "1 2\n" + "3 2\n" + "3 4\n" + "5 3\n" + "3\n" + "1 3\n" + "2 4\n" + "2 5",
			string("") + "9");
}

TEST(problemF, case4) {
	check(PATH + COMMAND,
			string("") + "8\n" + "1 2\n" + "2 3\n" + "4 3\n" + "2 5\n" + "6 3\n" + "6 7\n" + "8 6\n" + "5\n" + "2 7\n"
					+ "3 5\n" + "1 6\n" + "2 8\n" + "7 8", string("") + "62");
}
