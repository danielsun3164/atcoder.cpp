#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc217_problemE, case1) {
	check(string("") + "8\n" + "1 4\n" + "1 3\n" + "1 2\n" + "1 1\n" + "3\n" + "2\n" + "1 0\n" + "2",
			string("") + "1\n" + "2");
}

TEST(abc217_problemE, case2) {
	check(string("") + "9\n" + "1 5\n" + "1 5\n" + "1 3\n" + "2\n" + "3\n" + "2\n" + "1 6\n" + "3\n" + "2",
			string("") + "5\n" + "3\n" + "5");
}
