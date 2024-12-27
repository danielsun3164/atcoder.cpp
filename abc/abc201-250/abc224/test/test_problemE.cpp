#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc224/E";
}

TEST(abc224_problemE, case1) {
	check(string("") + "3 3 7\n" + "1 1 4\n" + "1 2 7\n" + "2 1 3\n" + "2 3 5\n" + "3 1 2\n" +
			  "3 2 5\n" + "3 3 5",
		  string("") + "1\n" + "0\n" + "2\n" + "0\n" + "3\n" + "1\n" + "0");
}

TEST(abc224_problemE, case2) {
	check(string("") + "5 7 20\n" + "2 7 8\n" + "2 6 4\n" + "4 1 9\n" + "1 5 4\n" + "2 2 7\n" +
			  "5 5 2\n" + "1 7 2\n" + "4 6 6\n" + "1 4 1\n" + "2 1 10\n" + "5 6 9\n" + "5 3 3\n" +
			  "3 7 9\n" + "3 6 3\n" + "4 3 4\n" + "3 3 10\n" + "4 2 1\n" + "3 5 4\n" + "1 2 6\n" +
			  "4 7 9",
		  string("") + "2\n" + "4\n" + "1\n" + "5\n" + "3\n" + "6\n" + "6\n" + "2\n" + "7\n" +
			  "0\n" + "0\n" + "4\n" + "1\n" + "5\n" + "3\n" + "0\n" + "5\n" + "2\n" + "4\n" + "0");
}
