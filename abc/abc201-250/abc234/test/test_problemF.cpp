#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc234/F";
}

TEST(abc234_problemF, case1) {
	check(string("") + "aab", string("") + "8");
}

TEST(abc234_problemF, case2) {
	check(string("") + "aaa", string("") + "3");
}

TEST(abc234_problemF, case3) {
	check(string("") + "abcdefghijklmnopqrstuvwxyz", string("") + "149621752");
}
