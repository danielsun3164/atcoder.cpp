#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc018_problemD, case1) {
	check(string("") + "3 4 2 3 7\n" + "1 1 9\n" + "1 2 7\n" + "1 3 15\n" + "1 4 6\n" + "2 2 3\n" +
			  "2 4 6\n" + "3 3 6",
		  string("") + "37");
}

TEST(abc018_problemD, case2) {
	check(string("") + "4 5 3 2 9\n" + "2 3 5\n" + "3 1 4\n" + "2 2 2\n" + "4 1 9\n" + "3 5 3\n" +
			  "3 3 8\n" + "1 4 5\n" + "1 5 7\n" + "2 4 8",
		  string("") + "26");
}
