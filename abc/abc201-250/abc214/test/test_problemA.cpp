#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc214/A";
}

TEST(abc214_problemA, case1) {
	check(string("") + "214", string("") + "8");
}

TEST(abc214_problemA, case2) {
	check(string("") + "1", string("") + "4");
}

TEST(abc214_problemA, case3) {
	check(string("") + "126", string("") + "6");
}
