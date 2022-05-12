#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc162_problemD, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "RRGB", string("") + "1");
}

TEST(abc162_problemD, case2) {
	check(PATH + COMMAND, string("") + "39\n" + "RBRBGRBGGBBRRGBBRRRBGGBRBGBRBGBRBBBGBBB", string("") + "1800");
}
