#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc061_problemB, case1) {
	check(string("") + "4 3\n" + "1 2\n" + "2 3\n" + "1 4",
		  string("") + "2\n" + "2\n" + "1\n" + "1");
}

TEST(abc061_problemB, case2) {
	check(string("") + "2 5\n" + "1 2\n" + "2 1\n" + "1 2\n" + "2 1\n" + "1 2",
		  string("") + "5\n" + "5");
}

TEST(abc061_problemB, case3) {
	check(string("") + "8 8\n" + "1 2\n" + "3 4\n" + "1 5\n" + "2 8\n" + "3 7\n" + "5 2\n" +
			  "4 1\n" + "6 8",
		  string("") + "3\n" + "3\n" + "2\n" + "2\n" + "2\n" + "1\n" + "1\n" + "2");
}
