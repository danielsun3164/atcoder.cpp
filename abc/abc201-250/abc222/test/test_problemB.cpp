#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc222/B";
}

TEST(abc222_problemB, case1) {
	check(string("") + "4 50\n" + "80 60 40 0", string("") + "2");
}

TEST(abc222_problemB, case2) {
	check(string("") + "3 90\n" + "89 89 89", string("") + "3");
}

TEST(abc222_problemB, case3) {
	check(string("") + "2 22\n" + "6 37", string("") + "1");
}
