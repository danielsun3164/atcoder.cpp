#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(atc002_problemB, case1) {
	check(string("") + "12 15 7", string("") + "3");
}

TEST(atc002_problemB, case2) {
	check(string("") + "123456789 234567894 6574837563712", string("") + "120678297");
}
