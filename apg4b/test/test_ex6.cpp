#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex6";
}

TEST(apg4b_ex6, case1) {
	check(string("") + "1 + 2", string("") + "3");
}

TEST(apg4b_ex6, case2) {
	check(string("") + "5 - 3", string("") + "2");
}

TEST(apg4b_ex6, case3) {
	check(string("") + "10 * 20", string("") + "200");
}

TEST(apg4b_ex6, case4) {
	check(string("") + "10 / 3", string("") + "3");
}

TEST(apg4b_ex6, case5) {
	check(string("") + "100 / 0", string("") + "error");
}

TEST(apg4b_ex6, case6) {
	check(string("") + "25 ? 31", string("") + "error");
}

TEST(apg4b_ex6, case7) {
	check(string("") + "0 + 0", string("") + "0");
}
