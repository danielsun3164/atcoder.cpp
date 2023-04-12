#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc216/H";
}

TEST(abc216_problemH, case1) {
	check(string("") + "2 2\n" + "1 2", string("") + "374341633");
}

TEST(abc216_problemH, case2) {
	check(string("") + "2 2\n" + "10 100", string("") + "1");
}

TEST(abc216_problemH, case3) {
	check(string("") + "10 832\n" + "73 160 221 340 447 574 720 742 782 970", string("") + "553220346");
}
