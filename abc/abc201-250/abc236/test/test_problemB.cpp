#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc236/B";
}

TEST(abc236_problemB, case1) {
	check(string("") + "3\n" + "1 3 2 3 3 2 2 1 1 1 2", string("") + "3");
}

TEST(abc236_problemB, case2) {
	check(string("") + "1\n" + "1 1 1", string("") + "1");
}

TEST(abc236_problemB, case3) {
	check(string("") + "4\n" + "3 2 1 1 2 4 4 4 4 3 1 3 2 1 3", string("") + "2");
}
