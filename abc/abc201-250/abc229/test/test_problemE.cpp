#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc229/E";
}

TEST(abc229_problemE, case1) {
	check(string("") + "6 7\n" + "1 2\n" + "1 4\n" + "1 5\n" + "2 4\n" + "2 3\n" + "3 5\n" + "3 6",
		  string("") + "1\n" + "2\n" + "3\n" + "2\n" + "1\n" + "0");
}

TEST(abc229_problemE, case2) {
	check(string("") + "8 7\n" + "7 8\n" + "3 4\n" + "5 6\n" + "5 7\n" + "5 8\n" + "6 7\n" + "6 8",
		  string("") + "3\n" + "2\n" + "2\n" + "1\n" + "1\n" + "1\n" + "1\n" + "0");
}
