#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc243/E";
}

TEST(abc243_problemE, case1) {
	check(string("") + "3 3\n" + "1 2 2\n" + "2 3 3\n" + "1 3 6", string("") + "1");
}

TEST(abc243_problemE, case2) {
	check(string("") + "5 4\n" + "1 3 3\n" + "2 3 9\n" + "3 5 3\n" + "4 5 3", string("") + "0");
}

TEST(abc243_problemE, case3) {
	check(string("") + "5 10\n" + "1 2 71\n" + "1 3 9\n" + "1 4 82\n" + "1 5 64\n" + "2 3 22\n" +
			  "2 4 99\n" + "2 5 1\n" + "3 4 24\n" + "3 5 18\n" + "4 5 10",
		  string("") + "5");
}
