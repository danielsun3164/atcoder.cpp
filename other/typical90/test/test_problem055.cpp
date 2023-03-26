#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem055";

TEST(typical90_problem055, case1) {
	check(PATH + COMMAND, string("") + "6 7 1\n" + "1 2 3 4 5 6", string("") + "1");
}

TEST(typical90_problem055, case2) {
	check(PATH + COMMAND, string("") + "10 1 0\n" + "0 0 0 0 0 0 0 0 0 0", string("") + "252");
}
