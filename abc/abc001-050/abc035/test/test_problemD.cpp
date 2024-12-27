#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc035_problemD, case1) {
	check(string("") + "2 2 5\n" + "1 3\n" + "1 2 2\n" + "2 1 1", string("") + "6");
}

TEST(abc035_problemD, case2) {
	check(string("") + "2 2 3\n" + "1 3\n" + "1 2 2\n" + "2 1 1", string("") + "3");
}

TEST(abc035_problemD, case3) {
	check(string("") + "8 15 120\n" + "1 2 6 16 1 3 11 9\n" + "1 8 1\n" + "7 3 14\n" + "8 2 13\n" +
			  "3 5 4\n" + "5 7 5\n" + "6 4 1\n" + "6 8 17\n" + "7 8 5\n" + "1 4 2\n" + "4 7 1\n" +
			  "6 1 3\n" + "3 1 10\n" + "2 6 5\n" + "2 4 12\n" + "5 1 30",
		  string("") + "1488");
}
