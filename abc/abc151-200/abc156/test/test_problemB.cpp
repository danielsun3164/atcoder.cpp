#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC156/B";
}

TEST(abc156_problemB, case1) {
	check(string("") + "11 2", string("") + "4");
}

TEST(abc156_problemB, case2) {
	check(string("") + "1010101 10", string("") + "7");
}

TEST(abc156_problemB, case3) {
	check(string("") + "314159265 3", string("") + "18");
}
