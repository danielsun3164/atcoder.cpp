#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc030_problemD, case1) {
	check(string("") + "6 4\n" + "5\n" + "2 3 1 2 6 5", string("") + "3");
}

TEST(abc030_problemD, case2) {
	check(string("") + "4 1\n" + "100000000000000000000\n" + "2 3 4 1", string("") + "1");
}

TEST(abc030_problemD, case3) {
	check(string("") + "8 1\n" + "1\n" + "2 3 4 5 3 2 4 5", string("") + "2");
}
