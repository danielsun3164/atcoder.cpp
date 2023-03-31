#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc194_problemC, case1) {
	check(string("") + "3\n" + "2 8 4", string("") + "56");
}

TEST(abc194_problemC, case2) {
	check(string("") + "5\n" + "-5 8 9 -4 -3", string("") + "950");
}
