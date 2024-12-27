#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC062/C";
}

TEST(abc046_problemC, case1) {
	check(string("") + "3\n" + "2 3\n" + "1 1\n" + "3 2", string("") + "10");
}

TEST(abc046_problemC, case2) {
	check(string("") + "4\n" + "1 1\n" + "1 1\n" + "1 5\n" + "1 100", string("") + "101");
}

TEST(abc046_problemC, case3) {
	check(string("") + "5\n" + "3 10\n" + "48 17\n" + "31 199\n" + "231 23\n" + "3 2",
		  string("") + "6930");
}
