#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "ABC153/D";
}

TEST(abc153_problemD, case1) {
	check(string("") + "2", string("") + "3");
}

TEST(abc153_problemD, case2) {
	check(string("") + "4", string("") + "7");
}

TEST(abc153_problemD, case3) {
	check(string("") + "1000000000000", string("") + "1099511627775");
}
