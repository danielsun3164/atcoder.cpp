#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc227/A";
}

TEST(abc227_problemA, case1) {
	check(string("") + "3 3 2", string("") + "1");
}

TEST(abc227_problemA, case2) {
	check(string("") + "1 100 1", string("") + "1");
}

TEST(abc227_problemA, case3) {
	check(string("") + "3 14 2", string("") + "3");
}
