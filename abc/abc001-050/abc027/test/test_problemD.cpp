#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc027_problemD, case1) {
	check(string("") + "M+MM-M", string("") + "2");
}

TEST(abc027_problemD, case2) {
	check(string("") + "MMM+M", string("") + "1");
}

TEST(abc027_problemD, case3) {
	check(string("") + "MMM+--MMM", string("") + "3");
}

TEST(abc027_problemD, case4) {
	check(string("") + "+", string("") + "0");
}
