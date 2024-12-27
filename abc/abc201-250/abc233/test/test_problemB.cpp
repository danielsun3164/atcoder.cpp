#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc233/B";
}

TEST(abc233_problemB, case1) {
	check(string("") + "3 7\n" + "abcdefgh", string("") + "abgfedch");
}

TEST(abc233_problemB, case2) {
	check(string("") + "1 7\n" + "reviver", string("") + "reviver");
}

TEST(abc233_problemB, case3) {
	check(string("") + "4 13\n" + "merrychristmas", string("") + "meramtsirhcyrs");
}
