#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc244/E";
}

TEST(abc244_problemE, case1) {
	check(string("") + "4 4 4 1 3 2\n" + "1 2\n" + "2 3\n" + "3 4\n" + "1 4", string("") + "4");
}

TEST(abc244_problemE, case2) {
	check(string("") + "6 5 10 1 2 3\n" + "2 3\n" + "2 4\n" + "4 6\n" + "3 6\n" + "1 5",
		  string("") + "0");
}

TEST(abc244_problemE, case3) {
	check(string("") + "10 15 20 4 4 6\n" + "2 6\n" + "2 7\n" + "5 7\n" + "4 5\n" + "2 4\n" +
			  "3 7\n" + "1 7\n" + "1 4\n" + "2 9\n" + "5 10\n" + "1 3\n" + "7 8\n" + "7 9\n" +
			  "1 6\n" + "1 2",
		  string("") + "952504739");
}
