#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemG";
}

TEST(practice2_problemG, case1) {
	check(string("") + "6 7\n" + "1 4\n" + "5 2\n" + "3 0\n" + "5 5\n" + "4 1\n" + "0 3\n" + "4 2",
			string("") + "4\n" + "1 5\n" + "2 1 4\n" + "1 2\n" + "2 0 3");
}
