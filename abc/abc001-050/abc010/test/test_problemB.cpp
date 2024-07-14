#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc010_problemB, case1) {
	check(string("") + "3\n" + "5 8 2", string("") + "4");
}

TEST(abc010_problemB, case2) {
	check(string("") + "9\n" + "1 2 3 4 5 6 7 8 9", string("") + "8");
}
