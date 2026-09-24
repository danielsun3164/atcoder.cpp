#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc241/G";
}

TEST(abc241_problemG, case1) {
	check(string("") + "4 2\n" + "2 1\n" + "2 3", string("") + "2 4");
}

TEST(abc241_problemG, case2) {
	check(string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 1", string(""));
}

TEST(abc241_problemG, case3) {
	check(string("") + "7 9\n" + "6 5\n" + "1 2\n" + "3 4\n" + "5 3\n" + "6 2\n" + "1 5\n" +
			  "3 2\n" + "6 4\n" + "1 4",
		  string("") + "1 3 6 7");
}
