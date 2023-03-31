#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc185_problemC, case1) {
	check(string("") + "12", string("") + "1");
}

TEST(abc185_problemC, case2) {
	check(string("") + "13", string("") + "12");
}

TEST(abc185_problemC, case3) {
	check(string("") + "17", string("") + "4368");
}
