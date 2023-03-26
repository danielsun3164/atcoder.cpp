#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc165_problemB, case1) {
	check(PATH + COMMAND, string("") + "103", string("") + "3");
}

TEST(abc165_problemB, case2) {
	check(PATH + COMMAND, string("") + "1000000000000000000", string("") + "3760");
}

TEST(abc165_problemB, case3) {
	check(PATH + COMMAND, string("") + "1333333333", string("") + "1706");
}
