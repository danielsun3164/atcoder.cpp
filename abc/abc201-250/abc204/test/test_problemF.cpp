#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc204_problemF, case1) {
	check(string("") + "2 2", string("") + "7");
}

TEST(abc204_problemF, case2) {
	check(string("") + "3 3", string("") + "131");
}

TEST(abc204_problemF, case3) {
	check(string("") + "5 100", string("") + "379944232");
}
