#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem053";
}

TEST(practice_problem053, case1) {
	check(string("") + "3", string("") + "85");
}

TEST(practice_problem053, case2) {
	check(string("") + "45", string("") + "414031736");
}
