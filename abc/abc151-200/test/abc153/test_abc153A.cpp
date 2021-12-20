#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc153A";

TEST(abc153A, case1) {
	check(PATH + COMMAND, string("") + "10 4", string("") + "3");
}

TEST(abc153A, case2) {
	check(PATH + COMMAND, string("") + "1 10000", string("") + "1");
}

TEST(abc153A, case3) {
	check(PATH + COMMAND, string("") + "10000 1", string("") + "10000");
}
