#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc036_problemA, case1) {
	check(string("") + "12 36", string("") + "3");
}

TEST(abc036_problemA, case2) {
	check(string("") + "12 100", string("") + "9");
}
