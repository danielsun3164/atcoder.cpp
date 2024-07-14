#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc033_problemA, case1) {
	check(string("") + "2222", string("") + "SAME");
}

TEST(abc033_problemA, case2) {
	check(string("") + "1221", string("") + "DIFFERENT");
}

TEST(abc033_problemA, case3) {
	check(string("") + "0000", string("") + "SAME");
}
