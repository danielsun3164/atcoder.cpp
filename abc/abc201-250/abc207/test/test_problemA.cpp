#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc207_problemA, case1) {
	check(string("") + "3 4 5", string("") + "9");
}

TEST(abc207_problemA, case2) {
	check(string("") + "6 6 6", string("") + "12");
}

TEST(abc207_problemA, case3) {
	check(string("") + "99 99 98", string("") + "198");
}
