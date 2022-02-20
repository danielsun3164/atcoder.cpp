#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "7", string("") + "7");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "100000", string("") + "7927");
}
