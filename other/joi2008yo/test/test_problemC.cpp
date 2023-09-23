#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(joi2008yo_problemC, case1) {
	check(string("") + "5\n" + "1\n" + "7\n" + "9\n" + "6\n" + "10", string("") + "3\n" + "0");
}

TEST(joi2008yo_problemC, case2) {
	check(string("") + "10\n" + "8\n" + "7\n" + "14\n" + "18\n" + "4\n" + "11\n" + "3\n" + "17\n" + "5\n" + "19",
			string("") + "2\n" + "0");
}
