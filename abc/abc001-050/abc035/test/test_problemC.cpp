#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc035_problemC, case1) {
	check(string("") + "5 4\n" + "1 4\n" + "2 5\n" + "3 3\n" + "1 5", string("") + "01010");
}

TEST(abc035_problemC, case2) {
	check(string("") + "20 8\n" + "1 8\n" + "4 13\n" + "8 8\n" + "3 18\n" + "5 20\n" + "19 20\n" + "2 7\n" + "4 9",
			string("") + "10110000011110000000");
}
