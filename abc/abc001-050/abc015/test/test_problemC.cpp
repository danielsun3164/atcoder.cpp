#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc015_problemC, case1) {
	check(string("") + "3 4\n" + "1 3 5 17\n" + "2 4 2 3\n" + "1 3 2 9", string("") + "Found");
}

TEST(abc015_problemC, case2) {
	check(string("") + "5 3\n" + "89 62 15\n" + "44 36 17\n" + "4 24 24\n" + "25 98 99\n" + "66 33 57",
			string("") + "Nothing");
}
