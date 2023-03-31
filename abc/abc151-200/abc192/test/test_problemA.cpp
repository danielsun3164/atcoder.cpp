#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc192_problemA, case1) {
	check(string("") + "140", string("") + "60");
}

TEST(abc192_problemA, case2) {
	check(string("") + "1000", string("") + "100");
}
