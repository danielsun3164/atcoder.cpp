#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "abc", string("") + "1");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "abcabc", string("") + "-1");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "7\n" + "atcoder", string("") + "-1");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "19\n" + "bcabcabcabcabcabcab", string("") + "9");
}
