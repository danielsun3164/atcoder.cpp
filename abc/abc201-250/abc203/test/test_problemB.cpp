#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc203_problemB, case1) {
	check(string("") + "1 2", string("") + "203");
}

TEST(abc203_problemB, case2) {
	check(string("") + "3 3", string("") + "1818");
}
