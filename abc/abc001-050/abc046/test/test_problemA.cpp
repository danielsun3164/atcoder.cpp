#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC062/A";
}

TEST(abc046_problemA, case1) {
	check(string("") + "3 1 4", string("") + "3");
}

TEST(abc046_problemA, case2) {
	check(string("") + "3 3 33", string("") + "2");
}
