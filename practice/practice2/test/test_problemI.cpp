#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemI";
}

TEST(practice2_problemI, case1) {
	check(string("") + "abcbcba", string("") + "21");
}

TEST(practice2_problemI, case2) {
	check(string("") + "mississippi", string("") + "53");
}

TEST(practice2_problemI, case3) {
	check(string("") + "ababacaca", string("") + "33");
}

TEST(practice2_problemI, case4) {
	check(string("") + "aaaaa", string("") + "5");
}
