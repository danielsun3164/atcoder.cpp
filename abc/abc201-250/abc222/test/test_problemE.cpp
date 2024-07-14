#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc222/E";
}

TEST(abc222_problemE, case1) {
	check(string("") + "4 5 0\n" + "2 3 2 1 4\n" + "1 2\n" + "2 3\n" + "3 4", string("") + "2");
}

TEST(abc222_problemE, case2) {
	check(string("") + "3 10 10000\n" + "1 2 1 2 1 2 2 1 1 2\n" + "1 2\n" + "1 3",
		  string("") + "0");
}

TEST(abc222_problemE, case3) {
	check(string("") + "10 2 -1\n" + "1 10\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "5 6\n" +
			  "6 7\n" + "7 8\n" + "8 9\n" + "9 10",
		  string("") + "126");
}

TEST(abc222_problemE, case4) {
	check(string("") + "5 8 -1\n" + "1 4 1 4 2 1 3 5\n" + "1 2\n" + "4 1\n" + "3 1\n" + "1 5",
		  string("") + "2");
}
