#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc035_problemA, case1) {
	check(string("") + "4 3", string("") + "4:3");
}

TEST(abc035_problemA, case2) {
	check(string("") + "16 9", string("") + "16:9");
}

TEST(abc035_problemA, case3) {
	check(string("") + "28 21", string("") + "4:3");
}
