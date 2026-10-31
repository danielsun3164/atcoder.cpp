#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc248/Ex";
}

TEST(abc248_problemEx, case1) {
	check(string("") + "4 1\n" + "1 4 2 3", string("") + "9");
}

TEST(abc248_problemEx, case2) {
	check(string("") + "2 0\n" + "2 1", string("") + "3");
}

TEST(abc248_problemEx, case3) {
	check(string("") + "10 3\n" + "3 7 10 1 9 5 4 8 6 2", string("") + "37");
}
