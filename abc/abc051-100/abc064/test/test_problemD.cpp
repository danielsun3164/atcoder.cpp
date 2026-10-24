#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc063_problemD, case1) {
	check(string("") + "3\n" + "())", string("") + "(())");
}

TEST(abc063_problemD, case2) {
	check(string("") + "6\n" + ")))())", string("") + "(((()))())");
}

TEST(abc063_problemD, case3) {
	check(string("") + "8\n" + "))))((((", string("") + "(((())))(((())))");
}
