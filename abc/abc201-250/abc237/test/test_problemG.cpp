#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc237/G";
}

TEST(abc237_problemG, case1) {
	check(string("") + "5 2 1\n" + "1 4 5 2 3\n" + "1 3 5\n" + "2 1 3", string("") + "3");
}

TEST(abc237_problemG, case2) {
	check(string("") + "7 3 3\n" + "7 5 3 1 2 4 6\n" + "1 1 7\n" + "2 3 6\n" + "2 5 7",
		  string("") + "7");
}
