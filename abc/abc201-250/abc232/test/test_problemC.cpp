#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc232/C";
}

TEST(abc232_problemC, case1) {
	check(string("") + "4 4\n" + "1 2\n" + "1 3\n" + "1 4\n" + "3 4\n" + "1 3\n" + "1 4\n" +
			  "2 3\n" + "3 4",
		  string("") + "Yes");
}

TEST(abc232_problemC, case2) {
	check(string("") + "5 6\n" + "1 2\n" + "1 3\n" + "1 4\n" + "3 4\n" + "3 5\n" + "4 5\n" +
			  "1 2\n" + "1 3\n" + "1 4\n" + "1 5\n" + "3 5\n" + "4 5",
		  string("") + "No");
}

TEST(abc232_problemC, case3) {
	check(string("") + "8 0", string("") + "Yes");
}
