#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc234/E";
}

TEST(abc234_problemE, case1) {
	check(string("") + "152", string("") + "159");
}

TEST(abc234_problemE, case2) {
	check(string("") + "88", string("") + "88");
}

TEST(abc234_problemE, case3) {
	check(string("") + "8989898989", string("") + "9876543210");
}
