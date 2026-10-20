#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc245/C";
}

TEST(abc245_problemC, case1) {
	check(string("") + "5 4\n" + "9 8 3 7 2\n" + "1 6 2 9 5", string("") + "Yes");
}

TEST(abc245_problemC, case2) {
	check(string("") + "4 90\n" + "1 1 1 100\n" + "1 2 3 100", string("") + "No");
}

TEST(abc245_problemC, case3) {
	check(
		string("") + "4 1000000000\n" + "1 1 1000000000 1000000000\n" + "1 1000000000 1 1000000000",
		string("") + "Yes");
}
