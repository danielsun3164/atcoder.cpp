#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc188_problemF, case1) {
	check(PATH + COMMAND, string("") + "3 9", string("") + "3");
}

TEST(abc188_problemF, case2) {
	check(PATH + COMMAND, string("") + "7 11", string("") + "3");
}

TEST(abc188_problemF, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 1000000000000000000", string("") + "0");
}
