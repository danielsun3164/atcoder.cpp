#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc219/E";
}

TEST(abc219_problemE, case1) {
	check(string("") + "1 0 0 0\n" + "0 0 1 0\n" + "0 0 0 0\n" + "1 0 0 0", string("") + "1272");
}

TEST(abc219_problemE, case2) {
	check(string("") + "1 1 1 1\n" + "1 1 1 1\n" + "1 1 1 1\n" + "1 1 1 1", string("") + "1");
}
