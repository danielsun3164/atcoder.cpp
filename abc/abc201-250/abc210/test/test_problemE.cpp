#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc210/E";
}

TEST(abc210_problemE, case1) {
	check(string("") + "4 2\n" + "2 3\n" + "3 5", string("") + "11");
}

TEST(abc210_problemE, case2) {
	check(string("") + "6 1\n" + "3 4", string("") + "-1");
}
