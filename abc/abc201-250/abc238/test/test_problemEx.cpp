#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc238/Ex";
}

TEST(abc238_problemEx, case1) {
	check(string("") + "3\n" + "LLR", string("") + "831870297");
}

TEST(abc238_problemEx, case2) {
	check(string("") + "10\n" + "RRRRRRLLRR", string("") + "460301586");
}
