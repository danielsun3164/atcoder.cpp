#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC065/D";
}

TEST(abc049_problemD, case1) {
	check(string("") + "4 3 1\n" + "1 2\n" + "2 3\n" + "3 4\n" + "2 3", string("") + "1 2 2 1");
}

TEST(abc049_problemD, case2) {
	check(string("") + "4 2 2\n" + "1 2\n" + "2 3\n" + "1 4\n" + "2 3", string("") + "1 2 2 1");
}

TEST(abc049_problemD, case3) {
	check(string("") + "7 4 4\n" + "1 2\n" + "2 3\n" + "2 5\n" + "6 7\n" + "3 5\n" + "4 5\n" +
			  "3 4\n" + "6 7",
		  string("") + "1 1 2 1 2 2 2");
}
