#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc025_problemC, case1) {
	check(string("") + "0 15 0\n" + "0 0 25\n" + "20 10\n" + "0 0\n" + "25 0", string("") + "15\n" + "80");
}

TEST(abc025_problemC, case2) {
	check(string("") + "18 22 15\n" + "11 16 17\n" + "4 25\n" + "22 15\n" + "10 4", string("") + "72\n" + "107");
}
