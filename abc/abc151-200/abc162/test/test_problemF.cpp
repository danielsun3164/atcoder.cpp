#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 2 3 4 5 6", string("") + "12");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "-1000 -100 -10 0 10", string("") + "0");
}

TEST(problemF, case3) {
	check(PATH + COMMAND,
			string("") + "10\n"
					+ "1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000",
			string("") + "5000000000");
}

TEST(problemF, case4) {
	check(PATH + COMMAND,
			string("") + "27\n"
					+ "18 -28 18 28 -45 90 -45 23 -53 60 28 -74 -71 35 -26 -62 49 -77 57 24 -70 -93 69 -99 59 57 -49",
			string("") + "295");
}
