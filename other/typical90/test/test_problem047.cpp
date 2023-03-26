#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem047";

TEST(typical90_problem047, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "RGBGB\n" + "GRGRB", string("") + "6");
}

TEST(typical90_problem047, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "RRR\n" + "BBB", string("") + "5");
}

TEST(typical90_problem047, case3) {
	check(PATH + COMMAND, string("") + "10\n" + "BGGGRBBGRG\n" + "RGBBRGRGGG", string("") + "4");
}
