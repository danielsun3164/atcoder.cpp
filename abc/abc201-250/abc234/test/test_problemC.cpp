#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc234/C";
}

TEST(abc234_problemC, case1) {
	check(string("") + "3", string("") + "22");
}

TEST(abc234_problemC, case2) {
	check(string("") + "11", string("") + "2022");
}

TEST(abc234_problemC, case3) {
	check(string("") + "923423423420220108",
		  string("") + "220022020000202020002022022000002020002222002200002022002200");
}
