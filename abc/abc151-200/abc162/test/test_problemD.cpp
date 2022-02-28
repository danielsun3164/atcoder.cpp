#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "RRGB", string("") + "1");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "39\n" + "RBRBGRBGGBBRRGBBRRRBGGBRBGBRBGBRBBBGBBB", string("") + "1800");
}
