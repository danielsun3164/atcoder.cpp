#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem064";
	EXTERNAL = "typical90/064";
}

TEST(typical90_problem064, case1) {
	check(string("") + "3 3\n" + "1 2 3\n" + "2 3 1\n" + "1 2 -1\n" + "1 3 2",
		  string("") + "3\n" + "4\n" + "4");
}

TEST(typical90_problem064, case2) {
	check(string("") + "20 10\n" +
			  "61 51 92 -100 -89 -65 -89 -64 -74 7 87 -2 51 -39 -50 63 -23 36 74 37\n" +
			  "2 2 -45\n" + "6 19 82\n" + "2 9 36\n" + "7 13 71\n" + "16 20 90\n" + "18 20 -24\n" +
			  "14 17 -78\n" + "10 11 -55\n" + "7 19 -26\n" + "20 20 -7",
		  string("") + "1164\n" + "1328\n" + "1256\n" + "1350\n" + "1440\n" + "1416\n" + "1572\n" +
			  "1482\n" + "1430\n" + "1437");
}
