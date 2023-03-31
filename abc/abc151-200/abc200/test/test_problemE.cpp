#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc200_problemE, case1) {
	check(string("") + "2 5", string("") + "1 2 2");
}

TEST(abc200_problemE, case2) {
	check(string("") + "1000000 1000000000000000000", string("") + "1000000 1000000 1000000");
}

TEST(abc200_problemE, case3) {
	check(string("") + "9 47", string("") + "3 1 4");
}
