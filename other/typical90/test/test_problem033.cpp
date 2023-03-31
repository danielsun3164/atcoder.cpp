#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem033";
}

TEST(typical90_problem033, case1) {
	check(string("") + "2 3", string("") + "2");
}

TEST(typical90_problem033, case2) {
	check(string("") + "3 4", string("") + "4");
}

TEST(typical90_problem033, case3) {
	check(string("") + "3 6", string("") + "6");
}
