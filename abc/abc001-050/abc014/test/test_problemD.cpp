#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc014_problemD, case1) {
	check(string("") + "5\n" + "1 2\n" + "1 3\n" + "1 4\n" + "4 5\n" + "3\n" + "2 3\n" + "2 5\n" +
			  "2 4",
		  string("") + "3\n" + "4\n" + "3");
}

TEST(abc014_problemD, case2) {
	check(string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "5 6\n" + "4\n" + "1 3\n" +
			  "1 4\n" + "1 5\n" + "1 6",
		  string("") + "3\n" + "4\n" + "5\n" + "6");
}

TEST(abc014_problemD, case3) {
	check(string("") + "7\n" + "3 1\n" + "2 1\n" + "2 4\n" + "2 5\n" + "3 6\n" + "3 7\n" + "5\n" +
			  "4 5\n" + "1 6\n" + "5 6\n" + "4 7\n" + "5 3",
		  string("") + "3\n" + "3\n" + "5\n" + "5\n" + "4");
}
