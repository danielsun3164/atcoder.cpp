#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc004_problemC, case1) {
	check(string("") + "1", string("") + "213456");
}

TEST(abc004_problemC, case2) {
	check(string("") + "5", string("") + "234561");
}

TEST(abc004_problemC, case3) {
	check(string("") + "22", string("") + "615234");
}

TEST(abc004_problemC, case4) {
	check(string("") + "100000000", string("") + "345612");
}
