#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem020";
	EXTERNAL = "typical90/020";
}

TEST(typical90_problem020, case1) {
	check(string("") + "4 3 2", string("") + "Yes");
}

TEST(typical90_problem020, case2) {
	check(string("") + "16 3 2", string("") + "No");
}

TEST(typical90_problem020, case3) {
	check(string("") + "8 3 2", string("") + "No");
}
