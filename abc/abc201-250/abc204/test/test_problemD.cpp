#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc204_problemD, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "8 3 7 2 5", string("") + "13");
}

TEST(abc204_problemD, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "1000 1", string("") + "1000");
}

TEST(abc204_problemD, case3) {
	check(PATH + COMMAND, string("") + "9\n" + "3 14 15 9 26 5 35 89 79", string("") + "138");
}
