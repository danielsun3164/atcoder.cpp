#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc061_problemC, case1) {
	check(string("") + "3 4\n" + "1 1\n" + "2 2\n" + "3 3", string("") + "3");
}

TEST(abc061_problemC, case2) {
	check(string("") + "10 500000\n" + "1 100000\n" + "1 100000\n" + "1 100000\n" + "1 100000\n" +
			  "1 100000\n" + "100000 100000\n" + "100000 100000\n" + "100000 100000\n" +
			  "100000 100000\n" + "100000 100000",
		  string("1"));
}
