#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc012_problemD, case1) {
	check(string("") + "3 2\n" + "1 2 10\n" + "2 3 10", string("") + "10");
}

TEST(abc012_problemD, case2) {
	check(string("") + "5 5\n" + "1 2 12\n" + "2 3 14\n" + "3 4 7\n" + "4 5 9\n" + "5 1 18",
		  string("") + "26");
}

TEST(abc012_problemD, case3) {
	check(
		string("") + "4 6\n" + "1 2 1\n" + "2 3 1\n" + "3 4 1\n" + "4 1 1\n" + "1 3 1\n" + "4 2 1",
		string("") + "1");
}
