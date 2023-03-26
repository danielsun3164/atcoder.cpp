#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem069";

TEST(typical90_problem069, case1) {
	check(PATH + COMMAND, string("") + "2 3", string("") + "6");
}

TEST(typical90_problem069, case2) {
	check(PATH + COMMAND, string("") + "10 2", string("") + "0");
}

TEST(typical90_problem069, case3) {
	check(PATH + COMMAND, string("") + "2021 617", string("") + "53731843");
}
