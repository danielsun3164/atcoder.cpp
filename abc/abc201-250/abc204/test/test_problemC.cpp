#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc204/C";
}

TEST(abc204_problemC, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 2", string("") + "7");
}

TEST(abc204_problemC, case2) {
	check(string("") + "3 0", string("") + "3");
}

TEST(abc204_problemC, case3) {
	check(string("") + "4 4\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 1", string("") + "16");
}
