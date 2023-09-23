#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc219/A";
}

TEST(abc219_problemA, case1) {
	check(string("") + "56", string("") + "14");
}

TEST(abc219_problemA, case2) {
	check(string("") + "32", string("") + "8");
}

TEST(abc219_problemA, case3) {
	check(string("") + "0", string("") + "40");
}

TEST(abc219_problemA, case4) {
	check(string("") + "100", string("") + "expert");
}
