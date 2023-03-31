#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc158_problemB, case1) {
	check(string("") + "8 3 4", string("") + "4");
}

TEST(abc158_problemB, case2) {
	check(string("") + "8 0 4", string("") + "0");
}

TEST(abc158_problemB, case3) {
	check(string("") + "6 2 4", string("") + "2");
}
