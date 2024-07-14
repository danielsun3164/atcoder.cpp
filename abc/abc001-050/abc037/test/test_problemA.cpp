#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc037_problemA, case1) {
	check(string("") + "3 5 6", string("") + "2");
}

TEST(abc037_problemA, case2) {
	check(string("") + "8 6 20", string("") + "3");
}
