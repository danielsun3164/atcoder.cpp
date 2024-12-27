#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC191/E";
}

TEST(abc191_problemE, case1) {
	check(string("") + "4 4\n" + "1 2 5\n" + "2 3 10\n" + "3 1 15\n" + "4 3 20",
		  string("") + "30\n" + "30\n" + "30\n" + "-1");
}

TEST(abc191_problemE, case2) {
	check(string("") + "4 6\n" + "1 2 5\n" + "1 3 10\n" + "2 4 5\n" + "3 4 10\n" + "4 1 10\n" +
			  "1 1 10",
		  string("") + "10\n" + "20\n" + "30\n" + "20");
}

TEST(abc191_problemE, case3) {
	check(string("") + "4 7\n" + "1 2 10\n" + "2 3 30\n" + "1 4 15\n" + "3 4 25\n" + "3 4 20\n" +
			  "4 3 20\n" + "4 3 30",
		  string("") + "-1\n" + "-1\n" + "40\n" + "40");
}
