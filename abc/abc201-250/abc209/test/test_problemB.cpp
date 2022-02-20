#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "2 3\n" + "1 3", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "4 10\n" + "3 3 4 4", string("") + "No");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "8 30\n" + "3 1 4 1 5 9 2 6", string("") + "Yes");
}
