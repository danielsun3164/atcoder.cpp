#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc238/A";
}

TEST(abc238_problemA, case1) {
	check(string("") + "5", string("") + "Yes");
}

TEST(abc238_problemA, case2) {
	check(string("") + "2", string("") + "No");
}

TEST(abc238_problemA, case3) {
	check(string("") + "623947744", string("") + "Yes");
}
