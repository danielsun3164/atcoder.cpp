#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc232/E";
}

TEST(abc232_problemE, case1) {
	check(string("") + "2 2 2\n" + "1 2 2 1", string("") + "2");
}

TEST(abc232_problemE, case2) {
	check(string("") + "1000000000 1000000000 1000000\n" +
			  "1000000000 1000000000 1000000000 1000000000",
		  string("") + "24922282");
}

TEST(abc232_problemE, case3) {
	check(string("") + "3 3 3\n" + "1 3 3 3", string("") + "9");
}
