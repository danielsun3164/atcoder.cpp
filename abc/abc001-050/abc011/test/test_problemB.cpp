#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "taKahAshI", string("") + "Takahashi");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "A", string("") + "A");
}