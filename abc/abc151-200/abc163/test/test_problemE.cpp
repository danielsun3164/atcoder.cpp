#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "1 3 4 2", string("") + "20");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "5 5 6 1 1 1", string("") + "58");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "8 6 9 1 2 1", string("") + "85");
}
