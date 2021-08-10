#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc208B";

TEST(abc208B, case1) {
	check(COMMAND, string("") + "9", string("") + "3");
}

TEST(abc208B, case2) {
	check(COMMAND, string("") + "119", string("") + "10");
}

TEST(abc208B, case3) {
	check(COMMAND, string("") + "10000000", string("") + "24");
}
