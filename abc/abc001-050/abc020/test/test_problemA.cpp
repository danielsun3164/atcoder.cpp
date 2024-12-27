#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc020_problemA, case1) {
	check(string("") + "1", string("") + "ABC");
}

TEST(abc020_problemA, case2) {
	check(string("") + "2", string("") + "chokudai");
}
