#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(abc210_problemE, case1) {
	check(PATH + COMMAND, string("") + "4 2\n" + "2 3\n" + "3 5", string("") + "11");
}

TEST(abc210_problemE, case2) {
	check(PATH + COMMAND, string("") + "6 1\n" + "3 4", string("") + "-1");
}
