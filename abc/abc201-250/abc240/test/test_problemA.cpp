#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc240/A";
}

TEST(abc240_problemA, case1) {
	check(string("") + "4 5", string("") + "Yes");
}

TEST(abc240_problemA, case2) {
	check(string("") + "3 5", string("") + "No");
}

TEST(abc240_problemA, case3) {
	check(string("") + "1 10", string("") + "Yes");
}
