#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 0 1", string("") + "1");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 1 1", string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 1 0", string("") + "2");
}

TEST(problemE, case4) {
	check(PATH + COMMAND, string("") + "7 3\n" + "0 0 1 2 0 1 0", string("") + "2");
}
