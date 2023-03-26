#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem050";

TEST(typical90_problem050, case1) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "3");
}

TEST(typical90_problem050, case2) {
	check(PATH + COMMAND, string("") + "4 4", string("") + "2");
}

TEST(typical90_problem050, case3) {
	check(PATH + COMMAND, string("") + "5 2", string("") + "8");
}

TEST(typical90_problem050, case4) {
	check(PATH + COMMAND, string("") + "6783 125", string("") + "674508908");
}
