#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc025_problemB, case1) {
	check(string("") + "3 5 10\n" + "East 7\n" + "West 3\n" + "West 11", string("") + "West 8");
}

TEST(abc025_problemB, case2) {
	check(string("") + "3 3 8\n" + "West 6\n" + "East 3\n" + "East 1", string("") + "0");
}

TEST(abc025_problemB, case3) {
	check(string("") + "5 25 25\n" + "East 1\n" + "East 1\n" + "West 1\n" + "East 100\n" + "West 1",
			string("") + "East 25");
}
