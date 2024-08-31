#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc235/F";
}

TEST(abc235_problemF, case1) {
	check(string("") + "104\n" + "2\n" + "0 1", string("") + "520");
}

TEST(abc235_problemF, case2) {
	check(string("") + "999\n" + "4\n" + "1 2 3 4", string("") + "0");
}

TEST(abc235_problemF, case3) {
	check(string("") +
			  "123456789012345678901234567890123456789012345678901234567890123456789012345678901234"
			  "5678901234567890\n" +
			  "5\n" + "0 2 4 6 8",
		  string("") + "397365274");
}
