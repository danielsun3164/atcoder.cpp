#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc213/A";
}

TEST(abc213_problemA, case1) {
	check(string("") + "3 6", string("") + "5");
}

TEST(abc213_problemA, case2) {
	check(string("") + "10 12", string("") + "6");
}
