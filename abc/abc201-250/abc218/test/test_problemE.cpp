#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc218/E";
}

TEST(abc218_problemE, case1) {
	check(string("") + "4 5\n" + "1 2 1\n" + "1 3 1\n" + "1 4 1\n" + "3 2 2\n" + "4 2 2",
		  string("") + "4");
}

TEST(abc218_problemE, case2) {
	check(string("") + "3 3\n" + "1 2 1\n" + "2 3 0\n" + "3 1 -1", string("") + "1");
}

TEST(abc218_problemE, case3) {
	check(string("") + "2 3\n" + "1 2 -1\n" + "1 2 2\n" + "1 1 3", string("") + "5");
}
