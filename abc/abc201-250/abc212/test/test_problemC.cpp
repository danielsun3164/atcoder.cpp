#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc212_problemC, case1) {
	check(string("") + "2 2\n" + "1 6\n" + "4 9", string("") + "2");
}

TEST(abc212_problemC, case2) {
	check(string("") + "1 1\n" + "10\n" + "10", string("") + "0");
}

TEST(abc212_problemC, case3) {
	check(string("") + "6 8\n" + "82 76 82 82 71 70\n" + "17 39 67 2 45 35 22 24", string("") + "3");
}
