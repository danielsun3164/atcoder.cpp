#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc234/D";
}

TEST(abc234_problemD, case1) {
	check(string("") + "3 2\n" + "1 2 3", string("") + "1\n" + "2");
}

TEST(abc234_problemD, case2) {
	check(string("") + "11 5\n" + "3 7 2 5 11 6 1 9 8 10 4",
		  string("") + "2\n" + "3\n" + "3\n" + "5\n" + "6\n" + "7\n" + "7");
}
