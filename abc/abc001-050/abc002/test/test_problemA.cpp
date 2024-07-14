#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc002_problemA, case1) {
	check(string("") + "10 11", string("") + "11");
}

TEST(abc002_problemA, case2) {
	check(string("") + "100000000 10000000", string("") + "100000000");
}
