#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc239/D";
}

TEST(abc239_problemD, case1) {
	check(string("") + "2 3 3 4", string("") + "Aoki");
}

TEST(abc239_problemD, case2) {
	check(string("") + "1 100 50 60", string("") + "Takahashi");
}

TEST(abc239_problemD, case3) {
	check(string("") + "3 14 1 5", string("") + "Aoki");
}
