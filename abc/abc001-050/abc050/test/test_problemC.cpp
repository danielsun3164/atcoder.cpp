#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC066/C";
}

TEST(abc050_problemC, case1) {
	check(string("") + "5\n" + "2 4 4 0 2", string("") + "4");
}

TEST(abc050_problemC, case2) {
	check(string("") + "7\n" + "6 4 0 2 4 0 2", string("") + "0");
}

TEST(abc050_problemC, case3) {
	check(string("") + "8\n" + "7 5 1 1 7 3 5 3", string("") + "16");
}
