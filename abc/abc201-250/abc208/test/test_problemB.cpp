#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc208_problemB, case1) {
	check(string("") + "9", string("") + "3");
}

TEST(abc208_problemB, case2) {
	check(string("") + "119", string("") + "10");
}

TEST(abc208_problemB, case3) {
	check(string("") + "10000000", string("") + "24");
}
