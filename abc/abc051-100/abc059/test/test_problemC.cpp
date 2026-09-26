#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC072/C";
}

TEST(abc059_problemC, case1) {
	check(string("") + "4\n" + "1 -3 1 0", string("") + "4");
}

TEST(abc059_problemC, case2) {
	check(string("") + "5\n" + "3 -6 4 -5 7", string("0"));
}

TEST(abc059_problemC, case3) {
	check(string("") + "6\n" + "-1 4 3 2 -5 4", string("") + "8");
}
