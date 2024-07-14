#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc036_problemD, case1) {
	check(string("") + "5\n" + "2 5\n" + "1 5\n" + "2 4\n" + "3 2", string("") + "14");
}

TEST(abc036_problemD, case2) {
	check(string("") + "10\n" + "7 9\n" + "8 1\n" + "9 6\n" + "10 8\n" + "8 6\n" + "10 3\n" +
			  "5 8\n" + "4 8\n" + "2 5",
		  string("") + "192");
}
