#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC069/B";
}

TEST(abc055_problemB, case1) {
	check(string("") + "3", string("") + "6");
}

TEST(abc055_problemB, case2) {
	check(string("") + "10", string("") + "3628800");
}

TEST(abc055_problemB, case3) {
	check(string("") + "100000", string("") + "457992974");
}
