#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc242/A";
	TOLERANCE = 1E-6;
}

TEST(abc242_problemA, case1) {
	check_about(string("") + "30 500 20 103", 0.042553191489);
}

TEST(abc242_problemA, case2) {
	check_about(string("") + "50 500 100 1", 1.0);
}

TEST(abc242_problemA, case3) {
	check_about(string("") + "1 2 1 1000", 0.0);
}
