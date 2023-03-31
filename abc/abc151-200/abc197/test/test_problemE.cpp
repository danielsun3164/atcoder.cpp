#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc197_problemE, case1) {
	check(string("") + "5\n" + "2 2\n" + "3 1\n" + "1 3\n" + "4 2\n" + "5 3", string("") + "12");
}

TEST(abc197_problemE, case2) {
	check(string("") + "9\n" + "5 5\n" + "-4 4\n" + "4 3\n" + "6 3\n" + "-5 5\n" + "-3 2\n" + "2 2\n" + "3 3\n" + "1 4",
			string("") + "38");
}
