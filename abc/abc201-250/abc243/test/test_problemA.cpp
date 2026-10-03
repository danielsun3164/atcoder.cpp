#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc243/A";
}

TEST(abc243_problemA, case1) {
	check(string("") + "25 10 11 12", string("") + "T");
}

TEST(abc243_problemA, case2) {
	check(string("") + "30 10 10 10", string("") + "F");
}

TEST(abc243_problemA, case3) {
	check(string("") + "100000 1 1 1", string("") + "M");
}
