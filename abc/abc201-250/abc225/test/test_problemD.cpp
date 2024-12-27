#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc225/D";
}

TEST(abc225_problemD, case1) {
	check(string("") + "7 14\n" + "1 6 3\n" + "1 4 1\n" + "1 5 2\n" + "1 2 7\n" + "1 3 5\n" +
			  "3 2\n" + "3 4\n" + "3 6\n" + "2 3 5\n" + "2 4 1\n" + "1 1 5\n" + "3 2\n" + "3 4\n" +
			  "3 6",
		  string("") + "5 6 3 5 2 7\n" + "2 4 1\n" + "5 6 3 5 2 7\n" + "4 1 5 2 7\n" + "1 4\n" +
			  "2 6 3");
}
