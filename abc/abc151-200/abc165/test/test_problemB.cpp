#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC165/B";
}

TEST(abc165_problemB, case1) {
	check(string("") + "103", string("") + "3");
}

TEST(abc165_problemB, case2) {
	check(string("") + "1000000000000000000", string("") + "3760");
}

TEST(abc165_problemB, case3) {
	check(string("") + "1333333333", string("") + "1706");
}
