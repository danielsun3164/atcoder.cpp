#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc247/C";
}

TEST(abc247_problemC, case1) {
	check(string("") + "2", string("") + "1 2 1");
}

TEST(abc247_problemC, case2) {
	check(string("") + "1", string("") + "1");
}

TEST(abc247_problemC, case3) {
	check(string("") + "4", string("") + "1 2 1 3 1 2 1 4 1 2 1 3 1 2 1");
}
