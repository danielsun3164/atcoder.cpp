#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc006_problemB, case1) {
	check(PATH + COMMAND, string("") + "7", string("") + "7");
}

TEST(abc006_problemB, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(abc006_problemB, case3) {
	check(PATH + COMMAND, string("") + "100000", string("") + "7927");
}
