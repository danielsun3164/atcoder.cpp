#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc240/D";
}

TEST(abc240_problemD, case1) {
	check(string("") + "5\n" + "3 2 3 2 2", string("") + "1\n" + "2\n" + "3\n" + "4\n" + "3");
}

TEST(abc240_problemD, case2) {
	check(string("") + "10\n" + "2 3 2 3 3 3 2 3 3 2",
		  string("") + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "3\n" + "2\n" + "3\n" + "1\n" + "0");
}
