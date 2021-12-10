#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemI";

TEST(problemI, case1) {
	check(PATH + COMMAND, string("") + "abcbcba", string("") + "21");
}

TEST(problemI, case2) {
	check(PATH + COMMAND, string("") + "mississippi", string("") + "53");
}

TEST(problemI, case3) {
	check(PATH + COMMAND, string("") + "ababacaca", string("") + "33");
}

TEST(problemI, case4) {
	check(PATH + COMMAND, string("") + "aaaaa", string("") + "5");
}
