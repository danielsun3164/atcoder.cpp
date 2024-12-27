#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc205/A";
	TOLERANCE = 1E-6;
}

TEST(abc205_problemA, case1) {
	check_about(string("") + "45 200", 90.0);
}

TEST(abc205_problemA, case2) {
	check_about(string("") + "37 450", 166.5);
}

TEST(abc205_problemA, case3) {
	check_about(string("") + "0 1000", 0.0);
}

TEST(abc205_problemA, case4) {
	check_about(string("") + "50 0", 0.0);
}
