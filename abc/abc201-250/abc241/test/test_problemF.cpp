#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc241/F";
}

TEST(abc241_problemF, case1) {
	check(string("") + "7 8 7\n" + "3 4\n" + "5 6\n" + "1 4\n" + "2 1\n" + "2 8\n" + "4 5\n" +
			  "5 7\n" + "6 2\n" + "6 6",
		  string("") + "4");
}

TEST(abc241_problemF, case2) {
	check(string("") + "4 6 2\n" + "3 2\n" + "3 5\n" + "4 5\n" + "2 5", string("") + "-1");
}

TEST(abc241_problemF, case3) {
	check(string("") + "1 10 1\n" + "1 5\n" + "1 1\n" + "1 7", string("") + "-1");
}
