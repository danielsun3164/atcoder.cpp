#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc162_problemF, case1) {
	check(string("") + "6\n" + "1 2 3 4 5 6", string("") + "12");
}

TEST(abc162_problemF, case2) {
	check(string("") + "5\n" + "-1000 -100 -10 0 10", string("") + "0");
}

TEST(abc162_problemF, case3) {
	check(
			string("") + "10\n"
					+ "1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000",
			string("") + "5000000000");
}

TEST(abc162_problemF, case4) {
	check(
			string("") + "27\n"
					+ "18 -28 18 28 -45 90 -45 23 -53 60 28 -74 -71 35 -26 -62 49 -77 57 24 -70 -93 69 -99 59 57 -49",
			string("") + "295");
}
