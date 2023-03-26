#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem016";

TEST(typical90_problem016, case1) {
	check(PATH + COMMAND, string("") + "227\n" + "21 47 56", string("") + "5");
}

TEST(typical90_problem016, case2) {
	check(PATH + COMMAND, string("") + "9999\n" + "1 5 10", string("") + "1004");
}

TEST(typical90_problem016, case3) {
	check(PATH + COMMAND, string("") + "998244353\n" + "314159 265358 97932", string("") + "3333");
}

TEST(typical90_problem016, case4) {
	check(PATH + COMMAND, string("") + "100000000\n" + "10001 10002 10003", string("") + "9998");
}
