#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc204/D";
}

TEST(abc204_problemD, case1) {
	check(string("") + "5\n" + "8 3 7 2 5", string("") + "13");
}

TEST(abc204_problemD, case2) {
	check(string("") + "2\n" + "1000 1", string("") + "1000");
}

TEST(abc204_problemD, case3) {
	check(string("") + "9\n" + "3 14 15 9 26 5 35 89 79", string("") + "138");
}
