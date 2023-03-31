#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemG";
}

TEST(abc216_problemG, case1) {
	check(string("") + "6 3\n" + "1 4 3\n" + "2 2 1\n" + "4 6 2", string("") + "0 1 1 1 0 1",
			string("") + "1 1 0 1 1 0");
}

TEST(abc216_problemG, case2) {
	check(string("") + "8 2\n" + "2 6 1\n" + "3 5 3", string("") + "0 0 1 1 1 0 0 0");
}
