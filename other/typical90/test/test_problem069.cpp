#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem069";
	EXTERNAL = "typical90/069";
}

TEST(typical90_problem069, case1) {
	check(string("") + "2 3", string("") + "6");
}

TEST(typical90_problem069, case2) {
	check(string("") + "10 2", string("") + "0");
}

TEST(typical90_problem069, case3) {
	check(string("") + "2021 617", string("") + "53731843");
}
