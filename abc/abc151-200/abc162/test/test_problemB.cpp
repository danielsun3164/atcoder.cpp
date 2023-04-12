#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC162/B";
}

TEST(abc162_problemB, case1) {
	check(string("") + "15", string("") + "60");
}

TEST(abc162_problemB, case2) {
	check(string("") + "1000000", string("") + "266666333332");
}
