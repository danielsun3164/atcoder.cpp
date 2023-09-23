#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc202/C";
}

TEST(abc202_problemC, case1) {
	check(string("") + "3\n" + "1 2 2\n" + "3 1 2\n" + "2 3 2", string("") + "4");
}

TEST(abc202_problemC, case2) {
	check(string("") + "4\n" + "1 1 1 1\n" + "1 1 1 1\n" + "1 2 3 4", string("") + "16");
}

TEST(abc202_problemC, case3) {
	check(string("") + "3\n" + "2 3 3\n" + "1 3 3\n" + "1 1 1", string("") + "0");
}
