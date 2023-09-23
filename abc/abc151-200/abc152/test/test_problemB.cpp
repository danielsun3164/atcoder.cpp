#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC152/B";
}

TEST(abc152_problemB, case1) {
	check(string("") + "4 3", string("") + "3333");
}

TEST(abc152_problemB, case2) {
	check(string("") + "7 7", string("") + "7777777");
}
