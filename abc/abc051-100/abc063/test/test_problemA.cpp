#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC075/A";
}

TEST(abc063_problemA, case1) {
	check(string("") + "6 3", string("") + "9");
}

TEST(abc063_problemA, case2) {
	check(string("") + "6 4", string("") + "error");
}
