#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC064/D";
}

TEST(abc048_problemD, case1) {
	check(string("") + "aba", string("") + "Second");
}

TEST(abc048_problemD, case2) {
	check(string("") + "abc", string("") + "First");
}

TEST(abc048_problemD, case3) {
	check(string("") + "abcab", string("") + "First");
}
