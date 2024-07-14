#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc027_problemA, case1) {
	check(string("") + "1 1 2", string("") + "2");
}

TEST(abc027_problemA, case2) {
	check(string("") + "4 3 4", string("") + "3");
}

TEST(abc027_problemA, case3) {
	check(string("") + "5 5 5", string("") + "5");
}
