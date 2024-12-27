#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc237/B";
}

TEST(abc237_problemB, case1) {
	check(string("") + "4 3\n" + "1 2 3\n" + "4 5 6\n" + "7 8 9\n" + "10 11 12",
		  string("") + "1 4 7 10\n" + "2 5 8 11\n" + "3 6 9 12");
}

TEST(abc237_problemB, case2) {
	check(string("") + "2 2\n" + "1000000000 1000000000\n" + "1000000000 1000000000",
		  string("") + "1000000000 1000000000\n" + "1000000000 1000000000");
}
