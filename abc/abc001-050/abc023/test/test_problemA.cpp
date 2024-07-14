#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc023_problemA, case1) {
	check(string("") + "23", string("") + "5");
}

TEST(abc023_problemA, case2) {
	check(string("") + "70", string("") + "7");
}

TEST(abc023_problemA, case3) {
	check(string("") + "99", string("") + "18");
}
