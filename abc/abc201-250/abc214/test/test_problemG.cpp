#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc214/G";
}

TEST(abc214_problemG, case1) {
	check(string("") + "4\n" + "1 2 3 4\n" + "2 1 4 3", string("") + "4");
}

TEST(abc214_problemG, case2) {
	check(string("") + "3\n" + "1 2 3\n" + "2 1 3", string("") + "0");
}

TEST(abc214_problemG, case3) {
	check(string("") + "20\n" + "2 3 15 19 10 7 5 6 14 13 20 4 18 9 17 8 12 11 16 1\n" +
			  "8 12 4 13 19 3 10 16 11 9 1 2 17 6 5 18 7 14 20 15",
		  string("") + "803776944");
}
