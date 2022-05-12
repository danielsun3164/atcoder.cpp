#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc207_problemB, case1) {
	check(PATH + COMMAND, string("") + "5 2 3 2", string("") + "2");
}

TEST(abc207_problemB, case2) {
	check(PATH + COMMAND, string("") + "6 9 2 3", string("") + "-1");
}
