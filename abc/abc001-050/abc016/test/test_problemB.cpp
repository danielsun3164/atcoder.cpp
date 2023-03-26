#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc016_problemB, case1) {
	check(PATH + COMMAND, string("") + "1 0 1", string("") + "?");
}

TEST(abc016_problemB, case2) {
	check(PATH + COMMAND, string("") + "1 1 2", string("") + "+");
}

TEST(abc016_problemB, case3) {
	check(PATH + COMMAND, string("") + "1 1 0", string("") + "-");
}

TEST(abc016_problemB, case4) {
	check(PATH + COMMAND, string("") + "1 1 1", string("") + "!");
}
