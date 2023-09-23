#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc026_problemA, case1) {
	check(string("") + "10", string("") + "25");
}

TEST(abc026_problemA, case2) {
	check(string("") + "60", string("") + "900");
}
