#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc155_problemB, case1) {
	check(string("") + "5\n" + "6 7 9 10 31", string("") + "APPROVED");
}

TEST(abc155_problemB, case2) {
	check(string("") + "3\n" + "28 27 24", string("") + "DENIED");
}
