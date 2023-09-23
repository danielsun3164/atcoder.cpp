#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc204/A";
}

TEST(abc204_problemA, case1) {
	check(string("") + "0 1", string("") + "2");
}

TEST(abc204_problemA, case2) {
	check(string("") + "0 0", string("") + "0");
}
