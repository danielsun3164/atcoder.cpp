#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc231/H";
}

TEST(abc231_problemH, case1) {
	check(string("") + "2 3 6\n" + "1 1 1\n" + "1 2 10\n" + "1 3 100\n" + "2 1 1000\n" +
			  "2 2 10000\n" + "2 3 100000",
		  string("") + "1110");
}

TEST(abc231_problemH, case2) {
	check(string("") + "1 7 7\n" + "1 2 200000000\n" + "1 7 700000000\n" + "1 4 400000000\n" +
			  "1 3 300000000\n" + "1 6 600000000\n" + "1 5 500000000\n" + "1 1 100000000",
		  string("") + "2800000000");
}

TEST(abc231_problemH, case3) {
	check(string("") + "3 3 8\n" + "3 2 1\n" + "3 1 2\n" + "2 3 1\n" + "2 2 100\n" + "2 1 100\n" +
			  "1 3 2\n" + "1 2 100\n" + "1 1 100",
		  string("") + "6");
}
