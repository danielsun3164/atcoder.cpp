#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC076/C";
}

TEST(abc065_problemC, case1) {
	check(string("") + "2 2", string("") + "8");
}

TEST(abc065_problemC, case2) {
	check(string("") + "3 2", string("") + "12");
}

TEST(abc065_problemC, case3) {
	check(string("") + "1 8", string("") + "0");
}

TEST(abc065_problemC, case4) {
	check(string("") + "100000 100000", string("") + "530123477");
}
