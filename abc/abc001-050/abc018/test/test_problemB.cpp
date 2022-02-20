#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "abcdef\n" + "2\n" + "3 5\n" + "1 4", string("") + "debacf");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "redcoat\n" + "3\n" + "1 7\n" + "1 2\n" + "3 4", string("") + "atcoder");
}
