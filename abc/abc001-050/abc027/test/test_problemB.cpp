#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "2 0 0 0 3", string("") + "3");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "2\n" + "0 99", string("") + "-1");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "4\n" + "0 0 0 0", string("") + "0");
}
