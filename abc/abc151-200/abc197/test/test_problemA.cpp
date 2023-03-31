#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc197_problemA, case1) {
	check(string("") + "abc", string("") + "bca");
}

TEST(abc197_problemA, case2) {
	check(string("") + "aab", string("") + "aba");
}
