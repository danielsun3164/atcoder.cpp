#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc013_problemB, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "6", string("") + "2");
}

TEST(abc013_problemB, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "4", string("") + "2");
}

TEST(abc013_problemB, case3) {
	check(PATH + COMMAND, string("") + "8\n" + "1", string("") + "3");
}
