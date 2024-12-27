#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc038_problemC, case1) {
	check(string("") + "5\n" + "1 2 3 2 1", string("") + "8");
}

TEST(abc038_problemC, case2) {
	check(string("") + "4\n" + "1 2 3 4", string("") + "10");
}

TEST(abc038_problemC, case3) {
	check(string("") + "6\n" + "3 3 4 1 2 2", string("") + "8");
}

TEST(abc038_problemC, case4) {
	check(string("") + "6\n" + "1 5 2 3 4 2", string("") + "10");
}
