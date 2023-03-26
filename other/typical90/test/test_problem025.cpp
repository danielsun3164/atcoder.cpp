#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem025";

TEST(typical90_problem025, case1) {
	check(PATH + COMMAND, string("") + "999 434", string("") + "2");
}

TEST(typical90_problem025, case2) {
	check(PATH + COMMAND, string("") + "255 15", string("") + "2");
}

TEST(typical90_problem025, case3) {
	check(PATH + COMMAND, string("") + "9999999999 1", string("") + "0");
}
