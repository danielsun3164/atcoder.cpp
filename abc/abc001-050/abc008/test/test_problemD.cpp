#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc008_problemD, case1) {
	check(string("") + "6 4\n" + "3\n" + "2 4\n" + "3 1\n" + "4 3", string("") + "19");
}

TEST(abc008_problemD, case2) {
	check(string("") + "3 3\n" + "3\n" + "1 1\n" + "2 3\n" + "3 2", string("") + "9");
}

TEST(abc008_problemD, case3) {
	check(string("") + "15 10\n" + "8\n" + "7 10\n" + "12 8\n" + "4 4\n" + "5 7\n" + "9 9\n" +
			  "1 6\n" + "6 5\n" + "3 2",
		  string("") + "112");
}
