#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc159_problemB, case1) {
	check(PATH + COMMAND, string("") + "akasaka", string("") + "Yes");
}

TEST(abc159_problemB, case2) {
	check(PATH + COMMAND, string("") + "level", string("") + "No");
}

TEST(abc159_problemB, case3) {
	check(PATH + COMMAND, string("") + "atcoder", string("") + "No");
}
