#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc037_problemC, case1) {
	check(string("") + "5 3\n" + "1 2 4 8 16", string("") + "49");
}

TEST(abc037_problemC, case2) {
	check(
			string("") + "20 10\n"
					+ "100000000 100000000 98667799 100000000 100000000 100000000 100000000 99986657 100000000 100000000 100000000 100000000 100000000 98995577 100000000 100000000 99999876 100000000 100000000 99999999",
			string("") + "10988865195");
}
