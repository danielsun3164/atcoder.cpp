#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc213_problemB, case1) {
	check(string("") + "6\n" + "1 123 12345 12 1234 123456", string("") + "3");
}

TEST(abc213_problemB, case2) {
	check(string("") + "5\n" + "3 1 4 15 9", string("") + "5");
}
