#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem055";
	EXTERNAL = "typical90/055";
}

TEST(typical90_problem055, case1) {
	check(string("") + "6 7 1\n" + "1 2 3 4 5 6", string("") + "1");
}

TEST(typical90_problem055, case2) {
	check(string("") + "10 1 0\n" + "0 0 0 0 0 0 0 0 0 0", string("") + "252");
}
