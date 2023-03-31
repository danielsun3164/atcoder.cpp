#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc192_problemF, case1) {
	check(string("") + "3 9999999999\n" + "3 6 8", string("") + "4999999994");
}

TEST(abc192_problemF, case2) {
	check(string("") + "1 1000000000000000000\n" + "1", string("") + "999999999999999999");
}
