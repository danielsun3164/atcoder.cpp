#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ZONe2021/C";
}

TEST(zone2021_problemC, case1) {
	check(string("") + "3\n" + "3 9 6 4 6\n" + "6 9 3 1 1\n" + "8 8 9 3 7", string("") + "4");
}

TEST(zone2021_problemC, case2) {
	check(string("") + "5\n" + "6 13 6 19 11\n" + "4 4 12 11 18\n" + "20 7 19 2 5\n" + "15 5 12 20 7\n" + "8 7 6 18 5",
			string("") + "13");
}

TEST(zone2021_problemC, case3) {
	check(
			string("") + "10\n" + "6 7 5 18 2\n" + "3 8 1 6 3\n" + "7 2 8 7 7\n" + "6 3 3 4 7\n" + "12 8 9 15 9\n"
					+ "9 8 6 1 10\n" + "12 9 7 8 2\n" + "10 3 17 4 10\n" + "3 1 3 19 3\n" + "3 14 7 13 1",
			string("") + "10");
}
