#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc198/C";
}

TEST(abc198_problemC, case1) {
	check(string("") + "5 15 0", string("") + "3");
}

TEST(abc198_problemC, case2) {
	check(string("") + "5 11 0", string("") + "3");
}

TEST(abc198_problemC, case3) {
	check(string("") + "3 4 4", string("") + "2");
}
