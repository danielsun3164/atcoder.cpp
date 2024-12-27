#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc227/C";
}

TEST(abc227_problemC, case1) {
	check(string("") + "4", string("") + "5");
}

TEST(abc227_problemC, case2) {
	check(string("") + "100", string("") + "323");
}

TEST(abc227_problemC, case3) {
	check(string("") + "100000000000", string("") + "5745290566750");
}
