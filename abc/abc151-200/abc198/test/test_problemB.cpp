#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "1210", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "777", string("") + "Yes");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "123456789", string("") + "No");
}