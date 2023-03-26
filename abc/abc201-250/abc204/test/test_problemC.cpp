#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc204_problemC, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 2", string("") + "7");
}

TEST(abc204_problemC, case2) {
	check(PATH + COMMAND, string("") + "3 0", string("") + "3");
}

TEST(abc204_problemC, case3) {
	check(PATH + COMMAND, string("") + "4 4\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 1", string("") + "16");
}
