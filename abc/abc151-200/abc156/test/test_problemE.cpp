#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC156/E";
}

TEST(abc156_problemE, case1) {
	check(string("") + "3 2", string("") + "10");
}

TEST(abc156_problemE, case2) {
	check(string("") + "200000 1000000000", string("") + "607923868");
}

TEST(abc156_problemE, case3) {
	check(string("") + "15 6", string("") + "22583772");
}
