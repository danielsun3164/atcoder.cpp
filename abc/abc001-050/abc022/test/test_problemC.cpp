#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc022_problemC, case1) {
	check(string("") + "5 7\n" + "1 2 2\n" + "1 4 1\n" + "2 3 7\n" + "1 5 12\n" + "3 5 2\n" +
			  "2 5 3\n" + "3 4 5",
		  string("") + "13");
}

TEST(abc022_problemC, case2) {
	check(string("") + "5 4\n" + "1 2 1\n" + "1 3 1\n" + "1 4 1\n" + "1 5 1", string("") + "-1");
}

TEST(abc022_problemC, case3) {
	check(string("") + "10 12\n" + "1 4 3\n" + "1 9 1\n" + "2 5 4\n" + "2 6 1\n" + "3 7 5\n" +
			  "3 10 9\n" + "4 7 2\n" + "5 6 6\n" + "5 8 5\n" + "6 8 3\n" + "7 9 5\n" + "8 10 8",
		  string("") + "11");
}
