#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem025";
	EXTERNAL = "typical90/025";
}

TEST(typical90_problem025, case1) {
	check(string("") + "999 434", string("") + "2");
}

TEST(typical90_problem025, case2) {
	check(string("") + "255 15", string("") + "2");
}

TEST(typical90_problem025, case3) {
	check(string("") + "9999999999 1", string("") + "0");
}
