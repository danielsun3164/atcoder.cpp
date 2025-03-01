#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem083別回答";
	EXTERNAL = "typical90/083";
}

TEST(typical90_problem083別回答, case1) {
	check(string("") + "4 4\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 3\n" + "5\n" + "4 2\n" + "3 3\n" +
			  "2 4\n" + "4 5\n" + "1 6",
		  string("") + "1\n" + "1\n" + "3\n" + "2\n" + "5");
}

TEST(typical90_problem083別回答, case2) {
	check(string("") + "10 20\n" + "1 3\n" + "7 8\n" + "5 8\n" + "2 3\n" + "7 10\n" + "6 7\n" +
			  "4 7\n" + "9 5\n" + "6 5\n" + "2 9\n" + "4 2\n" + "5 7\n" + "3 10\n" + "4 8\n" +
			  "1 8\n" + "10 8\n" + "5 3\n" + "9 1\n" + "7 3\n" + "2 1\n" + "10\n" + "3 5\n" +
			  "2 2\n" + "8 9\n" + "5 3\n" + "8 2\n" + "3 9\n" + "7 1\n" + "7 1\n" + "8 4\n" + "6 8",
		  string("") + "1\n" + "5\n" + "1\n" + "9\n" + "3\n" + "3\n" + "9\n" + "1\n" + "1\n" + "1");
}
