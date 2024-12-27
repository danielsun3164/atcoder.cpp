#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc014_problemB, case1) {
	check(string("") + "4 5\n" + "1 10 100 1000", string("") + "101");
}

TEST(abc014_problemB, case2) {
	check(string("") + "20 1048575\n" + "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20",
		  string("") + "210");
}

TEST(abc014_problemB, case3) {
	check(string("") + "4 0\n" + "1000 1000 1000 1000", string("") + "0");
}
