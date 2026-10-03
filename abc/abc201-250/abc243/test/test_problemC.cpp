#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc243/C";
}

TEST(abc243_problemC, case1) {
	check(string("") + "3\n" + "2 3\n" + "1 1\n" + "4 1\n" + "RRL", string("") + "Yes");
}

TEST(abc243_problemC, case2) {
	check(string("") + "2\n" + "1 1\n" + "2 1\n" + "RR", string("") + "No");
}

TEST(abc243_problemC, case3) {
	check(string("") + "10\n" + "1 3\n" + "1 4\n" + "0 0\n" + "0 2\n" + "0 4\n" + "3 1\n" +
			  "2 4\n" + "4 2\n" + "4 4\n" + "3 3\n" + "RLRRRLRLRR",
		  string("") + "Yes");
}
