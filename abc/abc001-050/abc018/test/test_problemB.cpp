#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc018_problemB, case1) {
	check(string("") + "abcdef\n" + "2\n" + "3 5\n" + "1 4", string("") + "debacf");
}

TEST(abc018_problemB, case2) {
	check(string("") + "redcoat\n" + "3\n" + "1 7\n" + "1 2\n" + "3 4", string("") + "atcoder");
}
