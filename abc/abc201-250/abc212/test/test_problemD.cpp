#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc212/D";
}

TEST(abc212_problemD, case1) {
	check(string("") + "5\n" + "1 3\n" + "1 5\n" + "3\n" + "2 2\n" + "3", string("") + "3\n" + "7");
}

TEST(abc212_problemD, case2) {
	check(string("") + "6\n" + "1 1000000000\n" + "2 1000000000\n" + "2 1000000000\n" +
			  "2 1000000000\n" + "2 1000000000\n" + "3",
		  string("") + "5000000000");
}
