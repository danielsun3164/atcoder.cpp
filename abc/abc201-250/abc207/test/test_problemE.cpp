#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2 3 4", string("") + "3");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "8 6 3 3 3", string("") + "5");
}

TEST(problemE, case3) {
	check(PATH + COMMAND,
			string("") + "10\n"
					+ "791754273866483 706434917156797 714489398264550 918142301070506 559125109706263 694445720452148 648739025948445 869006293795825 718343486637033 934236559762733",
			string("") + "15");
}
