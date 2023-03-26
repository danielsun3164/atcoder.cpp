#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem006別回答";

TEST(typical90_problem006別回答, case1) {
	check(PATH + COMMAND, string("") + "7 3\n" + "atcoder", string("") + "acd");
}

TEST(typical90_problem006別回答, case2) {
	check(PATH + COMMAND, string("") + "14 5\n" + "kittyonyourlap", string("") + "inlap");
}
