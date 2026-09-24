#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc241/A";
}

TEST(abc241_problemA, case1) {
	check(string("") + "9 0 1 2 3 4 5 6 7 8", string("") + "7");
}

TEST(abc241_problemA, case2) {
	check(string("") + "4 8 8 8 0 8 8 8 8 8", string("") + "4");
}

TEST(abc241_problemA, case3) {
	check(string("") + "0 0 0 0 0 0 0 0 0 0", string("") + "0");
}
