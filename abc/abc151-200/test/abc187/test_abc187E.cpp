#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc187E";

TEST(abc187E, case1) {
	check(COMMAND,
			string("") + "5\n" + "1 2\n" + "2 3\n" + "2 4\n" + "4 5\n" + "4\n" + "1 1 1\n" + "1 4 10\n" + "2 1 100\n"
					+ "2 2 1000", string("") + "11\n" + "110\n" + "1110\n" + "110\n" + "100");
}

TEST(abc187E, case2) {
	check(COMMAND,
			string("") + "7\n" + "2 1\n" + "2 3\n" + "4 2\n" + "4 5\n" + "6 1\n" + "3 7\n" + "7\n" + "2 2 1\n"
					+ "1 3 2\n" + "2 2 4\n" + "1 6 8\n" + "1 3 16\n" + "2 4 32\n" + "2 1 64",
			string("") + "72\n" + "8\n" + "13\n" + "26\n" + "58\n" + "72\n" + "5");
}

TEST(abc187E, case3) {
	check(COMMAND,
			string("") + "11\n" + "2 1\n" + "1 3\n" + "3 4\n" + "5 2\n" + "1 6\n" + "1 7\n" + "5 8\n" + "3 9\n"
					+ "3 10\n" + "11 4\n" + "10\n" + "2 6 688\n" + "1 10 856\n" + "1 8 680\n" + "1 8 182\n"
					+ "2 2 452\n" + "2 4 183\n" + "2 6 518\n" + "1 3 612\n" + "2 6 339\n" + "2 3 206",
			string("") + "1657\n" + "1657\n" + "2109\n" + "1703\n" + "1474\n" + "1657\n" + "3202\n" + "1474\n"
					+ "1247\n" + "2109\n" + "2559");
}
