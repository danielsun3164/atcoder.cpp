#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc031_problemC, case1) {
	check(string("") + "6\n" + "1 -3 3 9 1 6", string("") + "6");
}

TEST(abc031_problemC, case2) {
	check(string("") + "3\n" + "5 5 5", string("") + "10");
}

TEST(abc031_problemC, case3) {
	check(string("") + "8\n" + "-1 10 -1 2 -1 10 -1 0", string("") + "-1");
}
