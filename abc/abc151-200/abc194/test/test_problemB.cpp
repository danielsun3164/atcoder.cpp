#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc194_problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "8 5\n" + "4 4\n" + "7 9", string("") + "5");
}

TEST(abc194_problemB, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "11 7\n" + "3 2\n" + "6 7", string("") + "5");
}
