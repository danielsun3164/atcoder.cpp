#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc207_problemB, case1) {
	check(string("") + "5 2 3 2", string("") + "2");
}

TEST(abc207_problemB, case2) {
	check(string("") + "6 9 2 3", string("") + "-1");
}
