#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC151/E";
}

TEST(abc151_problemE, case1) {
	check(string("") + "4 2\n" + "1 1 3 4", string("") + "11");
}

TEST(abc151_problemE, case2) {
	check(string("") + "6 3\n" + "10 10 10 -10 -10 -10", string("") + "360");
}

TEST(abc151_problemE, case3) {
	check(string("") + "3 1\n" + "1 1 1", string("") + "0");
}

TEST(abc151_problemE, case4) {
	check(
		string("") + "10 6\n" + "1000000000 1000000000 1000000000 1000000000 1000000000 0 0 0 0 0",
		string("") + "999998537");
}
