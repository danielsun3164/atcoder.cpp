#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc192_problemC, case1) {
	check(string("") + "314 2", string("") + "693");
}

TEST(abc192_problemC, case2) {
	check(string("") + "1000000000 100", string("") + "0");
}

TEST(abc192_problemC, case3) {
	check(string("") + "6174 100000", string("") + "6174");
}
