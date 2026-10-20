#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc245/A";
}

TEST(abc245_problemA, case1) {
	check(string("") + "7 0 6 30", string("") + "Aoki");
}

TEST(abc245_problemA, case2) {
	check(string("") + "7 30 7 30", string("") + "Takahashi");
}

TEST(abc245_problemA, case3) {
	check(string("") + "0 0 23 59", string("") + "Takahashi");
}
