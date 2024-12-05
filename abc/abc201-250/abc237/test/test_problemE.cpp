#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc237/E";
}

TEST(abc237_problemE, case1) {
	check(string("") + "4 4\n" + "10 8 12 5\n" + "1 2\n" + "1 3\n" + "2 3\n" + "3 4",
		  string("") + "3");
}

TEST(abc237_problemE, case2) {
	check(string("") + "2 1\n" + "0 10\n" + "1 2", string("") + "0");
}
