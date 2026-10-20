#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc245/G";
}

TEST(abc245_problemG, case1) {
	check(string("") + "4 4 2 2\n" + "1 1 2 2\n" + "2 3\n" + "1 2 15\n" + "2 3 30\n" + "3 4 40\n" +
			  "1 4 10",
		  string("") + "45 30 30 25");
}

TEST(abc245_problemG, case2) {
	check(string("") + "3 1 3 1\n" + "1 2 3\n" + "1\n" + "1 2 1000000000",
		  string("") + "-1 1000000000 -1");
}
