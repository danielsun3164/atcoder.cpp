#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc030_problemC, case1) {
	check(string("") + "3 4\n" + "2 3\n" + "1 5 7\n" + "3 8 12 13", string("") + "2");
}

TEST(abc030_problemC, case2) {
	check(string("") + "1 1\n" + "1 1\n" + "1\n" + "1", string("") + "0");
}

TEST(abc030_problemC, case3) {
	check(string("") + "6 7\n" + "5 3\n" + "1 7 12 19 20 26\n" + "4 9 15 23 24 31 33", string("") + "3");
}
