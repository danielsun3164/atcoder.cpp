#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc217_problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "2 3 1", string("") + "3 1 2");
}

TEST(abc217_problemC, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3", string("") + "1 2 3");
}

TEST(abc217_problemC, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "5 3 2 4 1", string("") + "5 3 2 4 1");
}
