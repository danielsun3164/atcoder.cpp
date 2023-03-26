#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem085";

TEST(typical90_problem085, case1) {
	check(PATH + COMMAND, string("") + "42", string("") + "5");
}

TEST(typical90_problem085, case2) {
	check(PATH + COMMAND, string("") + "7", string("") + "1");
}

TEST(typical90_problem085, case3) {
	check(PATH + COMMAND, string("") + "192", string("") + "16");
}
