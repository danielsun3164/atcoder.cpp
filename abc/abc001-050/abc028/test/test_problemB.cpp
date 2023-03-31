#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc028_problemB, case1) {
	check(string("") + "BEAF", string("") + "1 1 0 0 1 1");
}

TEST(abc028_problemB, case2) {
	check(string("") + "DECADE", string("") + "1 0 1 2 2 0");
}

TEST(abc028_problemB, case3) {
	check(string("") + "ABBCCCDDDDEEEEEFFFFFF", string("") + "1 2 3 4 5 6");
}
