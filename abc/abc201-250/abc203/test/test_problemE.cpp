#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc203/E";
}

TEST(abc203_problemE, case1) {
	check(string("") + "2 4\n" + "1 1\n" + "1 2\n" + "2 0\n" + "4 2", string("") + "3");
}

TEST(abc203_problemE, case2) {
	check(string("") + "1 1\n" + "1 1", string("") + "0");
}
