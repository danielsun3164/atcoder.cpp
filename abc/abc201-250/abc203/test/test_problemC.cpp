#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc203/C";
}

TEST(abc203_problemC, case1) {
	check(string("") + "2 3\n" + "2 1\n" + "5 10", string("") + "4");
}

TEST(abc203_problemC, case2) {
	check(
			string("") + "5 1000000000\n" + "1 1000000000\n" + "2 1000000000\n" + "3 1000000000\n" + "4 1000000000\n"
					+ "5 1000000000", string("") + "6000000000");
}

TEST(abc203_problemC, case3) {
	check(string("") + "3 2\n" + "5 5\n" + "2 1\n" + "2 2", string("") + "10");
}
