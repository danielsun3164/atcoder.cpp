#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc014B";

TEST(abc014B, case1) {
	check(PATH + COMMAND, string("") + "4 5\n" + "1 10 100 1000", string("") + "101");
}

TEST(abc014B, case2) {
	check(PATH + COMMAND, string("") + "20 1048575\n" + "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20",
			string("") + "210");
}

TEST(abc014B, case3) {
	check(PATH + COMMAND, string("") + "4 0\n" + "1000 1000 1000 1000", string("") + "0");
}
