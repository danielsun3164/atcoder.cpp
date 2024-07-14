#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc202/B";
}

TEST(abc202_problemB, case1) {
	check(string("") + "0601889", string("") + "6881090");
}

TEST(abc202_problemB, case2) {
	check(string("") + "86910", string("") + "01698");
}

TEST(abc202_problemB, case3) {
	check(string("") + "01010", string("") + "01010");
}
