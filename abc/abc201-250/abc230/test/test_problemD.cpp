#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc230/D";
}

TEST(abc230_problemD, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "4 7\n" + "5 9", string("") + "2");
}

TEST(abc230_problemD, case2) {
	check(string("") + "3 3\n" + "1 2\n" + "4 7\n" + "4 9", string("") + "1");
}

TEST(abc230_problemD, case3) {
	check(string("") + "5 2\n" + "1 100\n" + "1 1000000000\n" + "101 1000\n" + "9982 44353\n" +
			  "1000000000 1000000000",
		  string("") + "3");
}
