#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc023_problemB, case1) {
	check(string("") + "3\n" + "abc", string("") + "1");
}

TEST(abc023_problemB, case2) {
	check(string("") + "6\n" + "abcabc", string("") + "-1");
}

TEST(abc023_problemB, case3) {
	check(string("") + "7\n" + "atcoder", string("") + "-1");
}

TEST(abc023_problemB, case4) {
	check(string("") + "19\n" + "bcabcabcabcabcabcab", string("") + "9");
}
