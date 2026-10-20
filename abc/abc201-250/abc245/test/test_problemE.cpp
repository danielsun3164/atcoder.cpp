#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc245/E";
}

TEST(abc245_problemE, case1) {
	check(string("") + "2 3\n" + "2 4\n" + "3 2\n" + "8 1 5\n" + "2 10 5", string("") + "Yes");
}

TEST(abc245_problemE, case2) {
	check(string("") + "2 2\n" + "1 1\n" + "2 2\n" + "100 1\n" + "100 1", string("") + "No");
}

TEST(abc245_problemE, case3) {
	check(string("") + "1 1\n" + "10\n" + "100\n" + "100\n" + "10", string("") + "No");
}

TEST(abc245_problemE, case4) {
	check(string("") + "1 1\n" + "10\n" + "100\n" + "10\n" + "100", string("") + "Yes");
}
