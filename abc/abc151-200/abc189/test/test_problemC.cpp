#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "2 4 4 9 4 9", string("") + "20");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "200 4 4 9 4 9", string("") + "200");
}
