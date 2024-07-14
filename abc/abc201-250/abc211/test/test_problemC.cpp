#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc211/C";
}

TEST(abc211_problemC, case1) {
	check(string("") + "chchokudai", string("") + "3");
}

TEST(abc211_problemC, case2) {
	check(string("") + "atcoderrr", string("") + "0");
}

TEST(abc211_problemC, case3) {
	check(string("") + "chokudaichokudaichokudai", string("") + "45");
}
