#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc225/A";
}

TEST(abc225_problemA, case1) {
	check(string("") + "aba", string("") + "3");
}

TEST(abc225_problemA, case2) {
	check(string("") + "ccc", string("") + "1");
}

TEST(abc225_problemA, case3) {
	check(string("") + "xyz", string("") + "6");
}
