#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc032_problemC, case1) {
	check(string("") + "7 6\n" + "4\n" + "3\n" + "1\n" + "1\n" + "2\n" + "10\n" + "2", string("") + "4");
}

TEST(abc032_problemC, case2) {
	check(string("") + "6 10\n" + "10\n" + "10\n" + "10\n" + "10\n" + "0\n" + "10", string("") + "6");
}

TEST(abc032_problemC, case3) {
	check(string("") + "6 9\n" + "10\n" + "10\n" + "10\n" + "10\n" + "10\n" + "10", string("") + "0");
}

TEST(abc032_problemC, case4) {
	check(string("") + "4 0\n" + "1\n" + "2\n" + "3\n" + "4", string("") + "0");
}
