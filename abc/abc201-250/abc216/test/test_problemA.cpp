#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc216/A";
}

TEST(abc216_problemA, case1) {
	check(string("") + "15.8", string("") + "15+");
}

TEST(abc216_problemA, case2) {
	check(string("") + "1.0", string("") + "1-");
}

TEST(abc216_problemA, case3) {
	check(string("") + "12.5", string("") + "12");
}
