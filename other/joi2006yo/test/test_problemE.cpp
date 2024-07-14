#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
}

TEST(joi2006yo_problemE, case1) {
	check(string("") + "2 1 0 5", string("") + "0.50000");
}

TEST(joi2006yo_problemE, case2) {
	check(string("") + "3 1 1 3", string("") + "0.833");
}

TEST(joi2006yo_problemE, case3) {
	check(string("") + "2 2 1 3", string("") + "1.000");
}
