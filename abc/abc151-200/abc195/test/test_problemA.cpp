#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc195_problemA, case1) {
	check(string("") + "10 120", string("") + "Yes");
}

TEST(abc195_problemA, case2) {
	check(string("") + "10 125", string("") + "No");
}
