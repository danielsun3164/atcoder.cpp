#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc202/A";
}

TEST(abc202_problemA, case1) {
	check(string("") + "1 4 3", string("") + "13");
}

TEST(abc202_problemA, case2) {
	check(string("") + "5 6 4", string("") + "6");
}
