#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc247/Ex";
}

TEST(abc247_problemEx, case1) {
	check(string("") + "4 1\n" + "1 1 2 1", string("") + "3");
}

TEST(abc247_problemEx, case2) {
	check(string("") + "3 3\n" + "1 1 2", string("") + "1");
}

TEST(abc247_problemEx, case3) {
	check(string("") + "10 4\n" + "2 7 1 8 2 8 1 8 2 8", string("") + "132");
}
