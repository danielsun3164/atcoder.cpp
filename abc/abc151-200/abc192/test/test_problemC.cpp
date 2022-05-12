#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc192_problemC, case1) {
	check(PATH + COMMAND, string("") + "314 2", string("") + "693");
}

TEST(abc192_problemC, case2) {
	check(PATH + COMMAND, string("") + "1000000000 100", string("") + "0");
}

TEST(abc192_problemC, case3) {
	check(PATH + COMMAND, string("") + "6174 100000", string("") + "6174");
}
