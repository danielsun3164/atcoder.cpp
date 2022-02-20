#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "3 1 2 4 5", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "3 1 4 1 5 2", string("") + "No");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3", string("") + "Yes");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "1\n" + "1", string("") + "Yes");
}
