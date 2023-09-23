#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc013_problemB, case1) {
	check(string("") + "4\n" + "6", string("") + "2");
}

TEST(abc013_problemB, case2) {
	check(string("") + "6\n" + "4", string("") + "2");
}

TEST(abc013_problemB, case3) {
	check(string("") + "8\n" + "1", string("") + "3");
}
