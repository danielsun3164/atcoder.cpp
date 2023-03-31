#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc162_problemD, case1) {
	check(string("") + "4\n" + "RRGB", string("") + "1");
}

TEST(abc162_problemD, case2) {
	check(string("") + "39\n" + "RBRBGRBGGBBRRGBBRRRBGGBRBGBRBGBRBBBGBBB", string("") + "1800");
}
