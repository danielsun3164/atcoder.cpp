#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc239/Ex";
}

TEST(abc239_problemEx, case1) {
	check(string("") + "2 1", string("") + "2");
}

TEST(abc239_problemEx, case2) {
	check(string("") + "2 39", string("") + "12");
}

TEST(abc239_problemEx, case3) {
	check(string("") + "3 2", string("") + "250000004");
}

TEST(abc239_problemEx, case4) {
	check(string("") + "2392 39239", string("") + "984914531");
}

TEST(abc239_problemEx, case5) {
	check(string("") + "1000000000 1000000000", string("") + "776759630");
}
