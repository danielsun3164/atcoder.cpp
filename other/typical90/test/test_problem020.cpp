#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem020";

TEST(typical90_problem020, case1) {
	check(PATH + COMMAND, string("") + "4 3 2", string("") + "Yes");
}

TEST(typical90_problem020, case2) {
	check(PATH + COMMAND, string("") + "16 3 2", string("") + "No");
}

TEST(typical90_problem020, case3) {
	check(PATH + COMMAND, string("") + "8 3 2", string("") + "No");
}
