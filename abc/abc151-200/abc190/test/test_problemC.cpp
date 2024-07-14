#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC190/C";
}

TEST(abc190_problemC, case1) {
	check(string("") + "4 4\n" + "1 2\n" + "1 3\n" + "2 4\n" + "3 4\n" + "3\n" + "1 2\n" + "1 3\n" +
			  "2 3",
		  string("") + "2");
}

TEST(abc190_problemC, case2) {
	check(string("") + "4 4\n" + "1 2\n" + "1 3\n" + "2 4\n" + "3 4\n" + "4\n" + "3 4\n" + "1 2\n" +
			  "2 4\n" + "2 4",
		  string("") + "4");
}

TEST(abc190_problemC, case3) {
	check(string("") + "6 12\n" + "2 3\n" + "4 6\n" + "1 2\n" + "4 5\n" + "2 6\n" + "1 5\n" +
			  "4 5\n" + "1 3\n" + "1 2\n" + "2 6\n" + "2 3\n" + "2 5\n" + "5\n" + "3 5\n" +
			  "1 4\n" + "2 6\n" + "4 6\n" + "5 6",
		  string("") + "9");
}
