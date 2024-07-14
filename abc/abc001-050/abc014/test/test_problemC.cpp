#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc014_problemC, case1) {
	check(string("") + "4\n" + "0 2\n" + "2 3\n" + "2 4\n" + "5 6", string("") + "3");
}

TEST(abc014_problemC, case2) {
	check(string("") + "4\n" + "1000000 1000000\n" + "1000000 1000000\n" + "0 1000000\n" +
			  "1 1000000",
		  string("") + "4");
}
