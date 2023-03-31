#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc021_problemC, case1) {
	check(
			string("") + "7\n" + "1 7\n" + "8\n" + "1 2\n" + "1 3\n" + "4 2\n" + "4 3\n" + "4 5\n" + "4 6\n" + "7 5\n"
					+ "7 6", string("") + "4");
}

TEST(abc021_problemC, case2) {
	check(
			string("") + "7\n" + "1 7\n" + "9\n" + "1 2\n" + "1 3\n" + "4 2\n" + "4 3\n" + "4 5\n" + "4 6\n" + "7 5\n"
					+ "7 6\n" + "4 7", string("") + "2");
}
