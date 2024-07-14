#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc005_problemA, case1) {
	check(string("") + "4 8", string("") + "2");
}

TEST(abc005_problemA, case2) {
	check(string("") + "4 7", string("") + "1");
}

TEST(abc005_problemA, case3) {
	check(string("") + "4 3", string("") + "0");
}
