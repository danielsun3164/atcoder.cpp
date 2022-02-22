#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1\n" + "2\n" + "3\n" + "2\n" + "1", string("") + "2");
}

TEST(problemB, case2) {
	check(PATH + COMMAND,
			string("") + "11\n" + "3\n" + "1\n" + "4\n" + "1\n" + "5\n" + "9\n" + "2\n" + "6\n" + "5\n" + "3\n" + "5",
			string("") + "4");
}
