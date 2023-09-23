#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc003_problemA, case1) {
	check(string("") + "6", string("") + "35000");
}

TEST(abc003_problemA, case2) {
	check(string("") + "91", string("") + "460000");
}
