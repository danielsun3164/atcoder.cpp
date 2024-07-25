#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC063/B";
}

TEST(abc047_problemB, case1) {
	check(string("") + "5 4 2\n" + "2 1 1\n" + "3 3 4", string("") + "9");
}

TEST(abc047_problemB, case2) {
	check(string("") + "5 4 3\n" + "2 1 1\n" + "3 3 4\n" + "1 4 2", string("") + "0");
}

TEST(abc047_problemB, case3) {
	check(string("") + "10 10 5\n" + "1 6 1\n" + "4 1 3\n" + "6 9 4\n" + "9 4 2\n" + "3 1 3",
		  string("") + "64");
}
