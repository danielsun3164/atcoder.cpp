#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "7777", string("") + "Weak");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "0112", string("") + "Strong");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "9012", string("") + "Weak");
}
