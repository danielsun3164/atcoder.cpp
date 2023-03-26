#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem033";

TEST(typical90_problem033, case1) {
	check(PATH + COMMAND, string("") + "2 3", string("") + "2");
}

TEST(typical90_problem033, case2) {
	check(PATH + COMMAND, string("") + "3 4", string("") + "4");
}

TEST(typical90_problem033, case3) {
	check(PATH + COMMAND, string("") + "3 6", string("") + "6");
}
