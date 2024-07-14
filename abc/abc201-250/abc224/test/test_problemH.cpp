#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc224/H";
}

TEST(abc224_problemH, case1) {
	check(string("") + "3 4\n" + "4 3 6\n" + "5 2 3 4\n" + "1 2 3 2\n" + "2 1 2 3\n" + "3 2 1 2",
		  string("") + "37");
}

TEST(abc224_problemH, case2) {
	check(string("") + "1 1\n" + "10\n" + "10\n" + "0", string("") + "0");
}

TEST(abc224_problemH, case3) {
	check(string("") + "5 6\n" + "3 2 6 7 5\n" + "4 9 8 6 2 3\n" + "2 0 2 1 1 0\n" +
			  "2 3 2 1 0 0\n" + "2 2 4 0 2 2\n" + "4 1 0 3 0 2\n" + "1 0 0 2 2 5",
		  string("") + "79");
}
