#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC061/D";
}

TEST(abc045_problemD, case1) {
	check(string("") + "4 5 8\n" + "1 1\n" + "1 4\n" + "1 5\n" + "2 3\n" + "3 1\n" + "3 2\n" +
			  "3 4\n" + "4 4",
		  string("") + "0\n" + "0\n" + "0\n" + "2\n" + "4\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0");
}

TEST(abc045_problemD, case2) {
	check(string("") + "10 10 20\n" + "1 1\n" + "1 4\n" + "1 9\n" + "2 5\n" + "3 10\n" + "4 2\n" +
			  "4 7\n" + "5 9\n" + "6 4\n" + "6 6\n" + "6 7\n" + "7 1\n" + "7 3\n" + "7 7\n" +
			  "8 1\n" + "8 5\n" + "8 10\n" + "9 2\n" + "10 4\n" + "10 9",
		  string("") + "4\n" + "26\n" + "22\n" + "10\n" + "2\n" + "0\n" + "0\n" + "0\n" + "0\n" +
			  "0");
}

TEST(abc045_problemD, case3) {
	check(string("") + "1000000000 1000000000 0", string("") + "999999996000000004\n" + "0\n" +
													  "0\n" + "0\n" + "0\n" + "0\n" + "0\n" +
													  "0\n" + "0\n" + "0");
}
