#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem075";

TEST(typical90_problem075, case1) {
	check(PATH + COMMAND, string("") + "42", string("") + "2");
}

TEST(typical90_problem075, case2) {
	check(PATH + COMMAND, string("") + "48", string("") + "3");
}

TEST(typical90_problem075, case3) {
	check(PATH + COMMAND, string("") + "54", string("") + "2");
}

TEST(typical90_problem075, case4) {
	check(PATH + COMMAND, string("") + "53", string("") + "0");
}
