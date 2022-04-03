#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemH";

TEST(problemH, case1) {
	check(PATH + COMMAND, string("") + "5 5 2\n" + "1 2\n" + "2 3\n" + "3 2\n" + "1 4\n" + "1 5\n" + "1 4 5 2 8",
			string("") + "18");
}

TEST(problemH, case2) {
	check(PATH + COMMAND, string("") + "3 1 10\n" + "2 3\n" + "1 100 100", string("") + "1");
}
