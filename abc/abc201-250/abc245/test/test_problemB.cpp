#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc245/B";
}

TEST(abc245_problemB, case1) {
	check(string("") + "8\n" + "0 3 2 6 2 1 0 0", string("") + "4");
}

TEST(abc245_problemB, case2) {
	check(string("") + "3\n" + "2000 2000 2000", string("") + "0");
}
