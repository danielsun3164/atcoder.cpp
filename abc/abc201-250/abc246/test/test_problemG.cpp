#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc246/G";
}

TEST(abc246_problemG, case1) {
	check(string("") + "7\n" + "2 4 6 5 6 10\n" + "1 2\n" + "1 3\n" + "2 4\n" + "2 5\n" + "5 6\n" +
			  "5 7",
		  string("") + "5");
}

TEST(abc246_problemG, case2) {
	check(string("") + "30\n" +
			  "29 27 79 27 30 4 93 89 44 88 70 75 96 3 78 39 97 12 53 62 32 38 84 49 93 53 26 13 "
			  "25\n" +
			  "13 15\n" + "14 22\n" + "17 24\n" + "12 3\n" + "4 3\n" + "5 8\n" + "26 15\n" +
			  "3 2\n" + "2 9\n" + "4 25\n" + "4 13\n" + "2 10\n" + "28 15\n" + "6 4\n" + "2 5\n" +
			  "19 9\n" + "2 7\n" + "2 14\n" + "23 30\n" + "17 2\n" + "7 16\n" + "21 13\n" +
			  "13 23\n" + "13 20\n" + "1 2\n" + "6 18\n" + "27 6\n" + "21 29\n" + "11 8",
		  string("") + "70");
}
