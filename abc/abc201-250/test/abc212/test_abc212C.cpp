#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc212C";

TEST(abc212C, case1) {
	check(PATH + COMMAND, string("") + "2 2\n" + "1 6\n" + "4 9", string("") + "2");
}

TEST(abc212C, case2) {
	check(PATH + COMMAND, string("") + "1 1\n" + "10\n" + "10", string("") + "0");
}

TEST(abc212C, case3) {
	check(PATH + COMMAND, string("") + "6 8\n" + "82 76 82 82 71 70\n" + "17 39 67 2 45 35 22 24", string("") + "3");
}
