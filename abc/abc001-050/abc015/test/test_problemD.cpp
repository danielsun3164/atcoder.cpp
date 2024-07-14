#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc015_problemD, case1) {
	check(string("") + "10\n" + "3 2\n" + "4 20\n" + "3 40\n" + "6 100", string("") + "140");
}

TEST(abc015_problemD, case2) {
	check(string("") + "10\n" + "5 4\n" + "9 10\n" + "3 7\n" + "3 1\n" + "2 6\n" + "4 5",
		  string("") + "18");
}

TEST(abc015_problemD, case3) {
	check(string("") + "22\n" + "5 3\n" + "5 40\n" + "8 50\n" + "3 60\n" + "4 70\n" + "6 80",
		  string("") + "210");
}
