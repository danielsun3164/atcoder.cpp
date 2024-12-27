#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem003";
	EXTERNAL = "typical90/003";
}

TEST(typical90_problem003, case1) {
	check(string("") + "3\n" + "1 2\n" + "2 3", string("") + "3");
}

TEST(typical90_problem003, case2) {
	check(string("") + "5\n" + "1 2\n" + "2 3\n" + "3 4\n" + "3 5", string("") + "4");
}

TEST(typical90_problem003, case3) {
	check(string("") + "10\n" + "1 2\n" + "1 3\n" + "2 4\n" + "4 5\n" + "4 6\n" + "3 7\n" +
			  "7 8\n" + "8 9\n" + "8 10",
		  string("") + "8");
}

TEST(typical90_problem003, case4) {
	check(string("") + "31\n" + "1 2\n" + "1 3\n" + "2 4\n" + "2 5\n" + "3 6\n" + "3 7\n" +
			  "4 8\n" + "4 9\n" + "5 10\n" + "5 11\n" + "6 12\n" + "6 13\n" + "7 14\n" + "7 15\n" +
			  "8 16\n" + "8 17\n" + "9 18\n" + "9 19\n" + "10 20\n" + "10 21\n" + "11 22\n" +
			  "11 23\n" + "12 24\n" + "12 25\n" + "13 26\n" + "13 27\n" + "14 28\n" + "14 29\n" +
			  "15 30\n" + "15 31",
		  string("") + "9");
}
