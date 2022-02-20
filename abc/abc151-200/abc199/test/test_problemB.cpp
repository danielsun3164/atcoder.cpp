#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "3 2\n" + "7 5", string("") + "3");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "1 5 3\n" + "10 7 3", string("") + "0");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "3 2 5\n" + "6 9 8", string("") + "2");
}
