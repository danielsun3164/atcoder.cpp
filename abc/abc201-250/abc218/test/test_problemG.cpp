#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc218/G";
}

TEST(abc218_problemG, case1) {
	check(string("") + "5\n" + "2 4 6 8 10\n" + "4 5\n" + "3 4\n" + "1 5\n" + "2 4",
		  string("") + "7");
}

TEST(abc218_problemG, case2) {
	check(string("") + "5\n" + "6 4 6 10 8\n" + "1 4\n" + "1 2\n" + "1 5\n" + "1 3",
		  string("") + "8");
}

TEST(abc218_problemG, case3) {
	check(string("") + "6\n" + "2 2 6 4 6 6\n" + "1 2\n" + "2 3\n" + "4 6\n" + "2 5\n" + "2 6",
		  string("") + "2");
}
