#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc240/Ex";
}

TEST(abc240_problemEx, case1) {
	check(string("") + "7\n" + "0101010", string("") + "3");
}

TEST(abc240_problemEx, case2) {
	check(string("") + "30\n" + "000011001110101001011110001001", string("") + "9");
}
