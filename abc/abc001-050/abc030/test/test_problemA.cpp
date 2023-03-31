#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc030_problemA, case1) {
	check(string("") + "5 2 6 3", string("") + "AOKI");
}

TEST(abc030_problemA, case2) {
	check(string("") + "100 80 100 73", string("") + "TAKAHASHI");
}

TEST(abc030_problemA, case3) {
	check(string("") + "66 30 55 25", string("") + "DRAW");
}
