#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "4 3\n" + "1 2 1 3\n" + "1 3 1", string("") + "2");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "4 6\n" + "1 3 2 4\n" + "1 5 2 6 4 3", string("") + "3");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "5 5\n" + "1 1 1 1 1\n" + "2 2 2 2 2", string("") + "5");
}
