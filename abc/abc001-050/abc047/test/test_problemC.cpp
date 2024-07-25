#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC063/C";
}

TEST(abc047_problemC, case1) {
	check(string("") + "BBBWW", string("") + "1");
}

TEST(abc047_problemC, case2) {
	check(string("") + "WWWWWW", string("") + "0");
}

TEST(abc047_problemC, case3) {
	check(string("") + "WBWBWBWBWB", string("") + "9");
}
