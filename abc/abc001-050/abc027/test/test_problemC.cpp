#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc027_problemC, case1) {
	check(string("") + "1", string("") + "Aoki");
}

TEST(abc027_problemC, case2) {
	check(string("") + "5", string("") + "Takahashi");
}

TEST(abc027_problemC, case3) {
	check(string("") + "7", string("") + "Aoki");
}

TEST(abc027_problemC, case4) {
	check(string("") + "10", string("") + "Takahashi");
}

TEST(abc027_problemC, case5) {
	check(string("") + "123456789123456789", string("") + "Aoki");
}
