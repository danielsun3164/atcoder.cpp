#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc227/E";
}

TEST(abc227_problemE, case1) {
	check(string("") + "KEY\n" + "1", string("") + "3");
}

TEST(abc227_problemE, case2) {
	check(string("") + "KKEE\n" + "2", string("") + "4");
}

TEST(abc227_problemE, case3) {
	check(string("") + "KKEEYY\n" + "1000000000", string("") + "90");
}
