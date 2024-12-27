#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc031_problemA, case1) {
	check(string("") + "31 87", string("") + "2784");
}

TEST(abc031_problemA, case2) {
	check(string("") + "101 65", string("") + "6666");
}

TEST(abc031_problemA, case3) {
	check(string("") + "3 3", string("") + "12");
}
