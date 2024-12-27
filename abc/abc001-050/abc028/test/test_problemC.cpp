#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc028_problemC, case1) {
	check(string("") + "1 2 3 4 5", string("") + "10");
}

TEST(abc028_problemC, case2) {
	check(string("") + "1 2 3 5 8", string("") + "14");
}
