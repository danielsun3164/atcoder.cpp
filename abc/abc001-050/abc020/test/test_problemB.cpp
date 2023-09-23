#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc020_problemB, case1) {
	check(string("") + "1 23", string("") + "246");
}

TEST(abc020_problemB, case2) {
	check(string("") + "999 999", string("") + "1999998");
}
