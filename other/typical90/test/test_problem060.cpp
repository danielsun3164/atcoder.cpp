#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem060";

TEST(typical90_problem060, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 2 3 3 2 1", string("") + "5");
}

TEST(typical90_problem060, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2 3 4", string("") + "4");
}

TEST(typical90_problem060, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "3 3 3 3 3", string("") + "1");
}
