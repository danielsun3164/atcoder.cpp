#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "abc207/E";
}

TEST(abc207_problemE, case1) {
	check(string("") + "4\n" + "1 2 3 4", string("") + "3");
}

TEST(abc207_problemE, case2) {
	check(string("") + "5\n" + "8 6 3 3 3", string("") + "5");
}

TEST(abc207_problemE, case3) {
	check(
			string("") + "10\n"
					+ "791754273866483 706434917156797 714489398264550 918142301070506 559125109706263 694445720452148 648739025948445 869006293795825 718343486637033 934236559762733",
			string("") + "15");
}
