#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(atc002_problemB, case1) {
	check(PATH + COMMAND, string("") + "12 15 7", string("") + "3");
}

TEST(atc002_problemB, case2) {
	check(PATH + COMMAND, string("") + "123456789 234567894 6574837563712", string("") + "120678297");
}
