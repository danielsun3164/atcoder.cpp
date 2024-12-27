#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "joi2007ho/B";
}

TEST(joi2007ho_problemB, case1) {
	check(string("") + "7 5\n" + "6\n" + "2\n" + "4\n" + "7\n" + "1", string("") + "2");
}

TEST(joi2007ho_problemB, case2) {
	check(string("") + "7 5\n" + "6\n" + "2\n" + "0\n" + "4\n" + "7", string("") + "4");
}
