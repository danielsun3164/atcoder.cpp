#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC151/B";
}

TEST(abc151_problemB, case1) {
	check(string("") + "5 10 7\n" + "8 10 3 6", string("") + "8");
}

TEST(abc151_problemB, case2) {
	check(string("") + "4 100 60\n" + "100 100 100", string("") + "0");
}

TEST(abc151_problemB, case3) {
	check(string("") + "4 100 60\n" + "0 0 0", string("") + "-1");
}
