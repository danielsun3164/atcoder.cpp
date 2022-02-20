#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "sardine", string("") + "xxxxxxx");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "xxxx", string("") + "xxxx");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "gone", string("") + "xxxx");
}
