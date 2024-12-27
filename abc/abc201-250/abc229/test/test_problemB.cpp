#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc229/B";
}

TEST(abc229_problemB, case1) {
	check(string("") + "229 390", string("") + "Hard");
}

TEST(abc229_problemB, case2) {
	check(string("") + "123456789 9876543210", string("") + "Easy");
}
