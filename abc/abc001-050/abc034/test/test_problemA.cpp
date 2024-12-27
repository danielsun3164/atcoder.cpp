#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc034_problemA, case1) {
	check(string("") + "12 34", string("") + "Better");
}

TEST(abc034_problemA, case2) {
	check(string("") + "98 56", string("") + "Worse");
}
