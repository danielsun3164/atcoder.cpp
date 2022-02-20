#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "akasaka", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "level", string("") + "No");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "atcoder", string("") + "No");
}
