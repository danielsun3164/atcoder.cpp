#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc002_problemD, case1) {
	check(string("") + "5 3\n" + "1 2\n" + "2 3\n" + "1 3", string("") + "3");
}

TEST(abc002_problemD, case2) {
	check(string("") + "5 3\n" + "1 2\n" + "2 3\n" + "3 4", string("") + "2");
}

TEST(abc002_problemD, case3) {
	check(string("") + "7 9\n" + "1 2\n" + "1 3\n" + "2 3\n" + "4 5\n" + "4 6\n" + "4 7\n" +
			  "5 6\n" + "5 7\n" + "6 7",
		  string("") + "4");
}

TEST(abc002_problemD, case4) {
	check(string("") + "12 0", string("") + "1");
}
