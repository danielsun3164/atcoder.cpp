#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc012_problemC, case1) {
	check(string("") + "2013", string("") + "2 x 6\n" + "3 x 4\n" + "4 x 3\n" + "6 x 2");
}

TEST(abc012_problemC, case2) {
	check(string("") + "2024", string("") + "1 x 1");
}
