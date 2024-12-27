#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc233/A";
}

TEST(abc233_problemA, case1) {
	check(string("") + "80 94", string("") + "2");
}

TEST(abc233_problemA, case2) {
	check(string("") + "1000 63", string("") + "0");
}

TEST(abc233_problemA, case3) {
	check(string("") + "270 750", string("") + "48");
}
