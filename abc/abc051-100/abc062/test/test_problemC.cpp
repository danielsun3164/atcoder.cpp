#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC074/C";
}

TEST(abc062_problemC, case1) {
	check(string("") + "3 5", string("") + "0");
}

TEST(abc062_problemC, case2) {
	check(string("") + "4 5", string("") + "2");
}
