#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc185_problemA, case1) {
	check(string("") + "5 3 7 11", string("") + "3");
}

TEST(abc185_problemA, case2) {
	check(string("") + "100 100 1 100", string("") + "1");
}
