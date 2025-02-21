#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex25";
}

TEST(apg4b_ex25, case1) {
	check(string("") + "3\n" + "0 1 2\n" + "3\n" + "1 2 3\n" + "intersection", string("") + "1 2");
}

TEST(apg4b_ex25, case2) {
	check(string("") + "3\n" + "0 1 2\n" + "3\n" + "1 2 3\n" + "union_set", string("") + "0 1 2 3");
}

TEST(apg4b_ex25, case3) {
	check(string("") + "3\n" + "0 1 2\n" + "3\n" + "1 2 3\n" + "symmetric_diff",
		  string("") + "0 3");
}

TEST(apg4b_ex25, case4) {
	check(string("") + "3\n" + "0 1 2\n" + "3\n" + "1 2 3\n" + "subtract 2", string("") + "0 1");
}

TEST(apg4b_ex25, case5) {
	check(string("") + "3\n" + "0 1 49\n" + "3\n" + "1 2 3\n" + "increment", string("") + "0 1 2");
}

TEST(apg4b_ex25, case6) {
	check(string("") + "3\n" + "0 1 49\n" + "3\n" + "1 2 3\n" + "decrement",
		  string("") + "0 48 49");
}
