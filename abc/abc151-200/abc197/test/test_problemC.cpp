#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC197/C";
}

TEST(abc197_problemC, case1) {
	check(string("") + "3\n" + "1 5 7", string("") + "2");
}

TEST(abc197_problemC, case2) {
	check(string("") + "3\n" + "10 10 10", string("") + "0");
}

TEST(abc197_problemC, case3) {
	check(string("") + "4\n" + "1 3 3 1", string("") + "0");
}
