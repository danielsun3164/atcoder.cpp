#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc016B";

TEST(abc016B, case1) {
	check(PATH + COMMAND, string("") + "1 0 1", string("") + "?");
}

TEST(abc016B, case2) {
	check(PATH + COMMAND, string("") + "1 1 2", string("") + "+");
}

TEST(abc016B, case3) {
	check(PATH + COMMAND, string("") + "1 1 0", string("") + "-");
}

TEST(abc016B, case4) {
	check(PATH + COMMAND, string("") + "1 1 1", string("") + "!");
}
