#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc156_problemE, case1) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "10");
}

TEST(abc156_problemE, case2) {
	check(PATH + COMMAND, string("") + "200000 1000000000", string("") + "607923868");
}

TEST(abc156_problemE, case3) {
	check(PATH + COMMAND, string("") + "15 6", string("") + "22583772");
}
