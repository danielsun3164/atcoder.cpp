#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc235/C";
}

TEST(abc235_problemC, case1) {
	check(string("") + "6 8\n" + "1 1 2 3 1 2\n" + "1 1\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 1\n" +
			  "2 2\n" + "2 3\n" + "4 1",
		  string("") + "1\n" + "2\n" + "5\n" + "-1\n" + "3\n" + "6\n" + "-1\n" + "-1");
}

TEST(abc235_problemC, case2) {
	check(string("") + "3 2\n" + "0 1000000000 999999999\n" + "1000000000 1\n" + "123456789 1",
		  string("") + "2\n" + "-1");
}
