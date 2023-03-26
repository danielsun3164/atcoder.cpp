#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc156_problemC, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 4", string("") + "5");
}

TEST(abc156_problemC, case2) {
	check(PATH + COMMAND, string("") + "7\n" + "14 14 2 13 56 2 37", string("") + "2354");
}
