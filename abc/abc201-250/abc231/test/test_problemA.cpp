#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc231/A";
	TOLERANCE = 1E-3;
}

TEST(abc231_problemA, case1) {
	check_about(string("") + "1000", 10.0);
}

TEST(abc231_problemA, case2) {
	check_about(string("") + "50", 0.5);
}

TEST(abc231_problemA, case3) {
	check_about(string("") + "3141", 31.41);
}
