#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc037_problemD, case1) {
	check(string("") + "2 3\n" + "1 4 5\n" + "2 4 9", string("") + "18");
}

TEST(abc037_problemD, case2) {
	check(string("") + "6 6\n" + "1 3 4 6 7 5\n" + "1 2 4 8 8 7\n" + "2 7 9 2 7 2\n" +
			  "9 4 2 7 6 5\n" + "2 8 4 6 7 6\n" + "3 7 9 1 2 7",
		  string("") + "170");
}
