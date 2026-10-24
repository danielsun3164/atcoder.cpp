#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc063_problemB, case1) {
	check(string("") + "4\n" + "2 3 7 9", string("") + "7");
}

TEST(abc063_problemB, case2) {
	check(string("") + "8\n" + "3 1 4 1 5 9 2 6", string("") + "8");
}
