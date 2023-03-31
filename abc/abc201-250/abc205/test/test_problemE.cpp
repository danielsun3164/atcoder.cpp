#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc205_problemE, case1) {
	check(string("") + "2 3 1", string("") + "9");
}

TEST(abc205_problemE, case2) {
	check(string("") + "1 0 0", string("") + "0");
}

TEST(abc205_problemE, case3) {
	check(string("") + "1000000 1000000 1000000", string("") + "192151600");
}
