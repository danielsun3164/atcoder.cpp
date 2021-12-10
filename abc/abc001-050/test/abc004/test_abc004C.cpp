#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc004C";

TEST(abc004C, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "213456");
}

TEST(abc004C, case2) {
	check(PATH + COMMAND, string("") + "5", string("") + "234561");
}

TEST(abc004C, case3) {
	check(PATH + COMMAND, string("") + "22", string("") + "615234");
}

TEST(abc004C, case4) {
	check(PATH + COMMAND, string("") + "100000000", string("") + "345612");
}
