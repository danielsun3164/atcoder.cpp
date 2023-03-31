#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc034_problemC, case1) {
	check(string("") + "4 3", string("") + "10");
}

TEST(abc034_problemC, case2) {
	check(string("") + "123 456", string("") + "210368064");
}
