#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc232/A";
}

TEST(abc232_problemA, case1) {
	check(string("") + "3x7", string("") + "21");
}

TEST(abc232_problemA, case2) {
	check(string("") + "9x9", string("") + "81");
}

TEST(abc232_problemA, case3) {
	check(string("") + "1x1", string("") + "1");
}
