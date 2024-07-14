#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc226/E";
}

TEST(abc226_problemE, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "1 3\n" + "2 3", string("") + "2");
}

TEST(abc226_problemE, case2) {
	check(string("") + "2 1\n" + "1 2", string("") + "0");
}

TEST(abc226_problemE, case3) {
	check(string("") + "7 7\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 2\n" + "5 6\n" + "6 7\n" + "7 5",
		  string("") + "4");
}
