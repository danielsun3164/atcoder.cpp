#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc004_problemA, case1) {
	check(string("") + "1000", string("") + "2000");
}

TEST(abc004_problemA, case2) {
	check(string("") + "1000000", string("") + "2000000");
}

TEST(abc004_problemA, case3) {
	check(string("") + "0", string("") + "0");
}
