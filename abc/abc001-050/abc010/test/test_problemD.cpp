#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc010_problemD, case1) {
	check(PATH + COMMAND, string("") + "4 2 3\n" + "2 3\n" + "0 1\n" + "1 2\n" + "1 3", string("") + "1");
}

TEST(abc010_problemD, case2) {
	check(PATH + COMMAND,
			string("") + "4 1 4\n" + "3\n" + "0 1\n" + "0 2\n" + "1 3\n" + "2 3\n" + "4 1 4\n" + "3\n" + "0 1\n"
					+ "0 2\n" + "1 3\n" + "2 3", string("") + "1");
}
