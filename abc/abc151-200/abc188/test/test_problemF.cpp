#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc188_problemF, case1) {
	check(string("") + "3 9", string("") + "3");
}

TEST(abc188_problemF, case2) {
	check(string("") + "7 11", string("") + "3");
}

TEST(abc188_problemF, case3) {
	check(string("") + "1000000000000000000 1000000000000000000", string("") + "0");
}
