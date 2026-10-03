#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC073/D";
}

TEST(abc060_problemD, case1) {
	check(string("") + "4 6\n" + "2 1\n" + "3 4\n" + "4 10\n" + "3 4", string("") + "11");
}

TEST(abc060_problemD, case2) {
	check(string("") + "4 6\n" + "2 1\n" + "3 7\n" + "4 10\n" + "3 6", string("") + "13");
}

TEST(abc060_problemD, case3) {
	check(string("") + "4 10\n" + "1 100\n" + "1 100\n" + "1 100\n" + "1 100", string("") + "400");
}

TEST(abc060_problemD, case4) {
	check(string("") + "4 1\n" + "10 100\n" + "10 100\n" + "10 100\n" + "10 100", string("") + "0");
}
