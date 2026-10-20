#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc245/D";
}

TEST(abc245_problemD, case1) {
	check(string("") + "1 2\n" + "2 1\n" + "12 14 8 2", string("") + "6 4 2");
}

TEST(abc245_problemD, case2) {
	check(string("") + "1 1\n" + "100 1\n" + "10000 0 -1", string("") + "100 -1");
}
