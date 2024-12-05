#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc237/Ex";
}

TEST(abc237_problemEx, case1) {
	check(string("") + "ababb", string("") + "3");
}

TEST(abc237_problemEx, case2) {
	check(string("") + "xyz", string("") + "3");
}

TEST(abc237_problemEx, case3) {
	check(string("") + "xxxxxxxxxx", string("") + "1");
}
