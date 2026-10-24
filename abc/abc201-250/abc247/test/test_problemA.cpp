#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc247/A";
}

TEST(abc247_problemA, case1) {
	check(string("") + "1011", string("") + "0101");
}

TEST(abc247_problemA, case2) {
	check(string("") + "0000", string("") + "0000");
}

TEST(abc247_problemA, case3) {
	check(string("") + "1111", string("") + "0111");
}
