#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc006_problemB, case1) {
	check(string("") + "7", string("") + "7");
}

TEST(abc006_problemB, case2) {
	check(string("") + "1", string("") + "0");
}

TEST(abc006_problemB, case3) {
	check(string("") + "100000", string("") + "7927");
}
