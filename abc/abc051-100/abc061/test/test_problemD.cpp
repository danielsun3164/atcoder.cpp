#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc061_problemD, case1) {
	check(string("") + "3 3\n" + "1 2 4\n" + "2 3 3\n" + "1 3 5", string("") + "7");
}

TEST(abc061_problemD, case2) {
	check(string("") + "2 2\n" + "1 2 1\n" + "2 1 1", string("") + "inf");
}

TEST(abc061_problemD, case3) {
	check(string("") + "6 5\n" + "1 2 -1000000000\n" + "2 3 -1000000000\n" + "3 4 -1000000000\n" +
			  "4 5 -1000000000\n" + "5 6 -1000000000",
		  string("") + "-5000000000");
}
