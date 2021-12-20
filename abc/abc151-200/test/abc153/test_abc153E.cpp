#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc153E";

TEST(abc153E, case1) {
	check(PATH + COMMAND, string("") + "9 3\n" + "8 3\n" + "4 2\n" + "2 1", string("") + "4");
}

TEST(abc153E, case2) {
	check(PATH + COMMAND, string("") + "100 6\n" + "1 1\n" + "2 3\n" + "3 9\n" + "4 27\n" + "5 81\n" + "6 243",
			string("") + "100");
}

TEST(abc153E, case3) {
	check(PATH + COMMAND,
			string("") + "9999 10\n" + "540 7550\n" + "691 9680\n" + "700 9790\n" + "510 7150\n" + "415 5818\n"
					+ "551 7712\n" + "587 8227\n" + "619 8671\n" + "588 8228\n" + "176 2461", string("") + "139815");
}
