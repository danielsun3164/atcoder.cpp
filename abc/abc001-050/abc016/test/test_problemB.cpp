#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc016_problemB, case1) {
	check(string("") + "1 0 1", string("") + "?");
}

TEST(abc016_problemB, case2) {
	check(string("") + "1 1 2", string("") + "+");
}

TEST(abc016_problemB, case3) {
	check(string("") + "1 1 0", string("") + "-");
}

TEST(abc016_problemB, case4) {
	check(string("") + "1 1 1", string("") + "!");
}
