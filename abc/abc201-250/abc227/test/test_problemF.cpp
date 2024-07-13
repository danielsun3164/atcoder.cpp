#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc227/F";
}

TEST(abc227_problemF, case1) {
	check(string("") + "1 3 2\n" + "3 4 5", string("") + "9");
}

TEST(abc227_problemF, case2) {
	check(string("") + "2 2 1\n" + "3 2\n" + "4 3", string("") + "3");
}

TEST(abc227_problemF, case3) {
	check(string("") + "3 5 3\n" + "4 7 8 6 4\n" + "6 7 3 10 2\n" + "3 8 1 10 4",
		  string("") + "21");
}
