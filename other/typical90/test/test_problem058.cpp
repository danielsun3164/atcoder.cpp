#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem058";

TEST(typical90_problem058, case1) {
	check(PATH + COMMAND, string("") + "5 3", string("") + "13");
}

TEST(typical90_problem058, case2) {
	check(PATH + COMMAND, string("") + "0 100", string("") + "0");
}

TEST(typical90_problem058, case3) {
	check(PATH + COMMAND, string("") + "99999 1000000000000000000", string("") + "84563");
}
