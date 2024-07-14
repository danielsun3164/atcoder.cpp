#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc218/D";
}

TEST(abc218_problemD, case1) {
	check(string("") + "6\n" + "0 0\n" + "0 1\n" + "1 0\n" + "1 1\n" + "2 0\n" + "2 1",
		  string("") + "3");
}

TEST(abc218_problemD, case2) {
	check(string("") + "4\n" + "0 1\n" + "1 2\n" + "2 3\n" + "3 4", string("") + "0");
}

TEST(abc218_problemD, case3) {
	check(string("") + "7\n" + "0 1\n" + "1 0\n" + "2 0\n" + "2 1\n" + "2 2\n" + "3 0\n" + "3 2",
		  string("") + "1");
}
