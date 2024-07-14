#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex20";
}

TEST(apg4b_ex20, case1) {
	check(string("") + "6\n" + "0 0 1 1 4",
		  string("") + "6\n" + "4\n" + "1\n" + "1\n" + "2\n" + "1");
}

TEST(apg4b_ex20, case2) {
	check(string("") + "8\n" + "0 0 1 2 0 3 6",
		  string("") + "8\n" + "4\n" + "2\n" + "3\n" + "1\n" + "1\n" + "2\n" + "1");
}
