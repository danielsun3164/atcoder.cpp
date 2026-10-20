#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc245/Ex";
}

TEST(abc245_problemEx, case1) {
	check(string("") + "2 3 6", string("") + "5");
}

TEST(abc245_problemEx, case2) {
	check(string("") + "10 0 2", string("") + "1023");
}

TEST(abc245_problemEx, case3) {
	check(string("") + "1000000000 20220326 1000000000000", string("") + "561382653");
}
