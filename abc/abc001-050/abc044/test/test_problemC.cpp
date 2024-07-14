#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC060/C";
}

TEST(abc044_problemC, case1) {
	check(string("") + "4 8\n" + "7 9 8 9", string("") + "5");
}

TEST(abc044_problemC, case2) {
	check(string("") + "3 8\n" + "6 6 9", string("") + "0");
}

TEST(abc044_problemC, case3) {
	check(string("") + "8 5\n" + "3 6 2 8 7 6 5 9", string("") + "19");
}

TEST(abc044_problemC, case4) {
	check(
		string("") + "33 3\n" + "3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3",
		string("") + "8589934591");
}
