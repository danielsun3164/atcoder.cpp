#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc238/F";
}

TEST(abc238_problemF, case1) {
	check(string("") + "4 2\n" + "2 4 3 1\n" + "2 1 4 3", string("") + "3");
}

TEST(abc238_problemF, case2) {
	check(string("") + "33 16\n" +
			  "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 "
			  "32 33\n" +
			  "33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 "
			  "3 2 1",
		  string("") + "168558757");
}

TEST(abc238_problemF, case3) {
	check(string("") + "15 7\n" + "4 9 7 5 6 13 2 11 3 1 12 14 15 10 8\n" +
			  "4 14 9 12 7 15 1 2 8 11 3 5 13 6 10",
		  string("") + "23");
}
