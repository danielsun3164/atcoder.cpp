#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc012_problemA, case1) {
	check(string("") + "1 2", string("") + "2 1");
}

TEST(abc012_problemA, case2) {
	check(string("") + "5 5", string("") + "5 5");
}
