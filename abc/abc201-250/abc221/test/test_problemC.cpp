#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc221/C";
}

TEST(abc221_problemC, case1) {
	check(string("") + "123", string("") + "63");
}

TEST(abc221_problemC, case2) {
	check(string("") + "1010", string("") + "100");
}

TEST(abc221_problemC, case3) {
	check(string("") + "998244353", string("") + "939337176");
}
