#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc163_problemE, case1) {
	check(string("") + "4\n" + "1 3 4 2", string("") + "20");
}

TEST(abc163_problemE, case2) {
	check(string("") + "6\n" + "5 5 6 1 1 1", string("") + "58");
}

TEST(abc163_problemE, case3) {
	check(string("") + "6\n" + "8 6 9 1 2 1", string("") + "85");
}
