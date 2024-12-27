#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc226/A";
}

TEST(abc226_problemA, case1) {
	check(string("") + "3.456", string("") + "3");
}

TEST(abc226_problemA, case2) {
	check(string("") + "99.500", string("") + "100");
}

TEST(abc226_problemA, case3) {
	check(string("") + "0.000", string("") + "0");
}
