#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC196/C";
}

TEST(abc196_problemC, case1) {
	check(string("") + "33", string("") + "3");
}

TEST(abc196_problemC, case2) {
	check(string("") + "1333", string("") + "13");
}

TEST(abc196_problemC, case3) {
	check(string("") + "10000000", string("") + "999");
}
