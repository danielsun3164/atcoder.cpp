#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc209/A";
}

TEST(abc209_problemA, case1) {
	check(string("") + "2 4", string("") + "3");
}

TEST(abc209_problemA, case2) {
	check(string("") + "10 100", string("") + "91");
}

TEST(abc209_problemA, case3) {
	check(string("") + "3 2", string("") + "0");
}
