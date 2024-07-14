#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc040_problemA, case1) {
	check(string("") + "5 2", string("") + "1");
}

TEST(abc040_problemA, case2) {
	check(string("") + "6 4", string("") + "2");
}

TEST(abc040_problemA, case3) {
	check(string("") + "90 30", string("") + "29");
}
