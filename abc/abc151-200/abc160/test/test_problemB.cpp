#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc160_problemB, case1) {
	check(string("") + "1024", string("") + "2020");
}

TEST(abc160_problemB, case2) {
	check(string("") + "0", string("") + "0");
}

TEST(abc160_problemB, case3) {
	check(string("") + "1000000000", string("") + "2000000000");
}
