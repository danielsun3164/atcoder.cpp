#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc001_problemC, case1) {
	check(string("") + "2750 628", string("") + "W 5");
}

TEST(abc001_problemC, case2) {
	check(string("") + "161 8", string("") + "C 0");
}

TEST(abc001_problemC, case3) {
	check(string("") + "3263 15", string("") + "NNW 1");
}

TEST(abc001_problemC, case4) {
	check(string("") + "1462 1959", string("") + "SE 12");
}

TEST(abc001_problemC, case5) {
	check(string("") + "1687 1029", string("") + "SSE 8");
}

TEST(abc001_problemC, case6) {
	check(string("") + "2587 644", string("") + "WSW 5");
}

TEST(abc001_problemC, case7) {
	check(string("") + "113 201", string("") + "NNE 3");
}

TEST(abc001_problemC, case8) {
	check(string("") + "2048 16", string("") + "SSW 1");
}
