#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc230/E";
}

TEST(abc230_problemE, case1) {
	check(string("") + "3", string("") + "5");
}

TEST(abc230_problemE, case2) {
	check(string("") + "10000000000", string("") + "231802823220");
}
