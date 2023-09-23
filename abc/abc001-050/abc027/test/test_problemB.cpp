#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc027_problemB, case1) {
	check(string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(abc027_problemB, case2) {
	check(string("") + "5\n" + "2 0 0 0 3", string("") + "3");
}

TEST(abc027_problemB, case3) {
	check(string("") + "2\n" + "0 99", string("") + "-1");
}

TEST(abc027_problemB, case4) {
	check(string("") + "4\n" + "0 0 0 0", string("") + "0");
}
