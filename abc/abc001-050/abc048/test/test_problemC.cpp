#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC064/C";
}

TEST(abc048_problemC, case1) {
	check(string("") + "3 3\n" + "2 2 2", string("") + "1");
}

TEST(abc048_problemC, case2) {
	check(string("") + "6 1\n" + "1 6 1 2 0 4", string("") + "11");
}

TEST(abc048_problemC, case3) {
	check(string("") + "5 9\n" + "3 1 4 1 5", string("") + "0");
}

TEST(abc048_problemC, case4) {
	check(string("") + "2 0\n" + "5 5", string("") + "10");
}
