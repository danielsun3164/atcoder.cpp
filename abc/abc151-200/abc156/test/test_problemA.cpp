#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC156/A";
}

TEST(abc156_problemA, case1) {
	check(string("") + "2 2919", string("") + "3719");
}

TEST(abc156_problemA, case2) {
	check(string("") + "22 3051", string("") + "3051");
}
