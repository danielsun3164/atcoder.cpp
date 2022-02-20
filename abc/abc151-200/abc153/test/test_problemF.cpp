#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3 3 2\n" + "1 2\n" + "5 4\n" + "9 2", string("") + "2");
}

TEST(problemF, case2) {
	check(PATH + COMMAND,
			string("") + "9 4 1\n" + "1 5\n" + "2 4\n" + "3 3\n" + "4 2\n" + "5 1\n" + "6 2\n" + "7 3\n" + "8 4\n"
					+ "9 5", string("") + "5");
}

TEST(problemF, case3) {
	check(PATH + COMMAND,
			string("") + "3 0 1\n" + "300000000 1000000000\n" + "100000000 1000000000\n" + "200000000 1000000000",
			string("") + "3000000000");
}
