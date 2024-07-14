#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc025_problemD, case1) {
	check(string("") + "0 0 15 2 7\n" + "0 0 16 1 22\n" + "20 25 4 19 0\n" + "3 23 9 18 10\n" +
			  "17 0 5 21 8",
		  string("") + "2");
}

TEST(abc025_problemD, case2) {
	check(string("") + "10 14 13 15 11\n" + "16 0 17 0 18\n" + "0 19 0 20 9\n" + "21 12 22 0 23\n" +
			  "0 24 0 25 0",
		  string("") + "40320");
}

TEST(abc025_problemD, case3) {
	check(string("") + "1 2 3 4 5\n" + "6 7 8 9 10\n" + "11 12 13 14 15\n" + "16 17 18 19 20\n" +
			  "0 0 0 0 0",
		  string("") + "0");
}

TEST(abc025_problemD, case4) {
	check(string("") + "1 25 2 24 3\n" + "23 4 22 5 21\n" + "6 20 7 19 8\n" + "18 9 17 10 16\n" +
			  "11 15 12 14 13",
		  string("") + "1");
}
