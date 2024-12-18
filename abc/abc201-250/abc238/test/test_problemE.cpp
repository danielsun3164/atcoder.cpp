#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc238/E";
}

TEST(abc238_problemE, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "2 3\n" + "2 2", string("") + "Yes");
}

TEST(abc238_problemE, case2) {
	check(string("") + "4 3\n" + "1 3\n" + "1 2\n" + "2 3", string("") + "No");
}

TEST(abc238_problemE, case3) {
	check(string("") + "4 4\n" + "1 1\n" + "2 2\n" + "3 3\n" + "1 4", string("") + "Yes");
}
