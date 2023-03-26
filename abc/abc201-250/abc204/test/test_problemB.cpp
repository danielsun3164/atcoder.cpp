#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc204_problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "6 17 28", string("") + "25");
}

TEST(abc204_problemB, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "8 9 10 11", string("") + "1");
}
