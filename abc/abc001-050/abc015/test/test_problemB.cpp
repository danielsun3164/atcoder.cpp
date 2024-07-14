#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc015_problemB, case1) {
	check(string("") + "4\n" + "0 1 3 8", string("") + "4");
}

TEST(abc015_problemB, case2) {
	check(string("") + "5\n" + "1 4 9 10 15", string("") + "8");
}
