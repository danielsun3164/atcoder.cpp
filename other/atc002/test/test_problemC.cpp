#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(atc002_problemC, case1) {
	check(string("") + "6\n" + "1 2 3 4 9 3", string("") + "53");
}
