#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2\n" + "4 2\n" + "3 1", string("") + "1 2 4 2 1 3 1");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 2\n" + "1 3\n" + "1 4\n" + "1 5", string("") + "1 2 1 3 1 4 1 5 1");
}