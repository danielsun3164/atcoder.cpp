#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC153/A";
}

TEST(abc153_problemA, case1) {
	check(string("") + "10 4", string("") + "3");
}

TEST(abc153_problemA, case2) {
	check(string("") + "1 10000", string("") + "1");
}

TEST(abc153_problemA, case3) {
	check(string("") + "10000 1", string("") + "10000");
}
