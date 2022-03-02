#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "41 2\n" + "5 6", string("") + "30");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "10 2\n" + "5 6", string("") + "-1");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "11 2\n" + "5 6", string("") + "0");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "314 15\n" + "9 26 5 35 8 9 79 3 23 8 46 2 6 43 3", string("") + "9");
}
