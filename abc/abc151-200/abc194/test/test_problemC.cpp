#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "2 8 4", string("") + "56");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "-5 8 9 -4 -3", string("") + "950");
}
