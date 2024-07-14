#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc039_problemB, case1) {
	check(string("") + "1", string("") + "1");
}

TEST(abc039_problemB, case2) {
	check(string("") + "981506241", string("") + "177");
}

TEST(abc039_problemB, case3) {
	check(string("") + "390625", string("") + "25");
}
