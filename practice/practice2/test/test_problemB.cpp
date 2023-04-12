#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(practice2_problemB, case1) {
	check(string("") + "5 5\n" + "1 2 3 4 5\n" + "1 0 5\n" + "1 2 4\n" + "0 3 10\n" + "1 0 5\n" + "1 0 3",
			string("") + "15\n" + "7\n" + "25\n" + "6");
}
