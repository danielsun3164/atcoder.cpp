#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc005_problemB, case1) {
	check(string("") + "3\n" + "1\n" + "2\n" + "3", string("") + "1");
}

TEST(abc005_problemB, case2) {
	check(string("") + "3\n" + "3\n" + "3\n" + "3", string("") + "3");
}

TEST(abc005_problemB, case3) {
	check(string("") + "5\n" + "3\n" + "1\n" + "4\n" + "1\n" + "5", string("") + "1");
}
