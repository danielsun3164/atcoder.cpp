#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc246/D";
}

TEST(abc246_problemD, case1) {
	check(string("") + "9", string("") + "15");
}

TEST(abc246_problemD, case2) {
	check(string("") + "0", string("") + "0");
}

TEST(abc246_problemD, case3) {
	check(string("") + "999999999989449206", string("") + "1000000000000000000");
}
