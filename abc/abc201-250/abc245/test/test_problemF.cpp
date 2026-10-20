#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc245/F";
}

TEST(abc245_problemF, case1) {
	check(string("") + "5 5\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 2\n" + "4 5", string("") + "4");
}

TEST(abc245_problemF, case2) {
	check(string("") + "3 2\n" + "1 2\n" + "2 1", string("") + "2");
}
