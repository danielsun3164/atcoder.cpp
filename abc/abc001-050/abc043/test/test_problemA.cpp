#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc043_problemA, case1) {
	check(string("") + "3", string("") + "6");
}

TEST(abc043_problemA, case2) {
	check(string("") + "10", string("") + "55");
}

TEST(abc043_problemA, case3) {
	check(string("") + "1", string("") + "1");
}
