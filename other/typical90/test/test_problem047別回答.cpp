#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem047別回答";
	EXTERNAL = "typical90/047";
}

TEST(typical90_problem047別回答, case1) {
	check(string("") + "5\n" + "RGBGB\n" + "GRGRB", string("") + "6");
}

TEST(typical90_problem047別回答, case2) {
	check(string("") + "3\n" + "RRR\n" + "BBB", string("") + "5");
}

TEST(typical90_problem047別回答, case3) {
	check(string("") + "10\n" + "BGGGRBBGRG\n" + "RGBBRGRGGG", string("") + "4");
}
