#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "8 3 4", string("") + "4");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "8 0 4", string("") + "0");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "6 2 4", string("") + "2");
}