#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc217/C";
}

TEST(abc217_problemC, case1) {
	check(string("") + "3\n" + "2 3 1", string("") + "3 1 2");
}

TEST(abc217_problemC, case2) {
	check(string("") + "3\n" + "1 2 3", string("") + "1 2 3");
}

TEST(abc217_problemC, case3) {
	check(string("") + "5\n" + "5 3 2 4 1", string("") + "5 3 2 4 1");
}
