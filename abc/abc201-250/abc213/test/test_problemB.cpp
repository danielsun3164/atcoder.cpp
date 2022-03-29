#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 123 12345 12 1234 123456", string("") + "3");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "3 1 4 15 9", string("") + "5");
}
