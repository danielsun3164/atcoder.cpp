#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemI";

TEST(practice2_problemI, case1) {
	check(PATH + COMMAND, string("") + "abcbcba", string("") + "21");
}

TEST(practice2_problemI, case2) {
	check(PATH + COMMAND, string("") + "mississippi", string("") + "53");
}

TEST(practice2_problemI, case3) {
	check(PATH + COMMAND, string("") + "ababacaca", string("") + "33");
}

TEST(practice2_problemI, case4) {
	check(PATH + COMMAND, string("") + "aaaaa", string("") + "5");
}
