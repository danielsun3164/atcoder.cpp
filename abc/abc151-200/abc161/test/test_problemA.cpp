#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC161/A";
}

TEST(abc161_problemA, case1) {
	check(string("") + "1 2 3", string("") + "3 1 2");
}

TEST(abc161_problemA, case2) {
	check(string("") + "100 100 100", string("") + "100 100 100");
}

TEST(abc161_problemA, case3) {
	check(string("") + "41 59 31", string("") + "31 41 59");
}
