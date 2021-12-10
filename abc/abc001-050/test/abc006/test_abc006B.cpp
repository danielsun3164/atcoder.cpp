#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc006B";

TEST(abc006B, case1) {
	check(PATH + COMMAND, string("") + "7", string("") + "7");
}

TEST(abc006B, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(abc006B, case3) {
	check(PATH + COMMAND, string("") + "100000", string("") + "7927");
}
