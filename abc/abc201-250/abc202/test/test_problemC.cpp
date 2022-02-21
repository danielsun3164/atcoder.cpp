#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 2\n" + "3 1 2\n" + "2 3 2", string("") + "4");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "1 1 1 1\n" + "1 1 1 1\n" + "1 2 3 4", string("") + "16");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "2 3 3\n" + "1 3 3\n" + "1 1 1", string("") + "0");
}