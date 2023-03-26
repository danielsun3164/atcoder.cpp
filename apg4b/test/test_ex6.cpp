#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex6";

TEST(apg4b_ex6, case1) {
	check(PATH + COMMAND, string("") + "1 + 2", string("") + "3");
}

TEST(apg4b_ex6, case2) {
	check(PATH + COMMAND, string("") + "5 - 3", string("") + "2");
}

TEST(apg4b_ex6, case3) {
	check(PATH + COMMAND, string("") + "10 * 20", string("") + "200");
}

TEST(apg4b_ex6, case4) {
	check(PATH + COMMAND, string("") + "10 / 3", string("") + "3");
}

TEST(apg4b_ex6, case5) {
	check(PATH + COMMAND, string("") + "100 / 0", string("") + "error");
}

TEST(apg4b_ex6, case6) {
	check(PATH + COMMAND, string("") + "25 ? 31", string("") + "error");
}

TEST(apg4b_ex6, case7) {
	check(PATH + COMMAND, string("") + "0 + 0", string("") + "0");
}
