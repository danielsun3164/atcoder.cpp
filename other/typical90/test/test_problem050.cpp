#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem050";
	EXTERNAL = "typical90/050";
}

TEST(typical90_problem050, case1) {
	check(string("") + "3 2", string("") + "3");
}

TEST(typical90_problem050, case2) {
	check(string("") + "4 4", string("") + "2");
}

TEST(typical90_problem050, case3) {
	check(string("") + "5 2", string("") + "8");
}

TEST(typical90_problem050, case4) {
	check(string("") + "6783 125", string("") + "674508908");
}
