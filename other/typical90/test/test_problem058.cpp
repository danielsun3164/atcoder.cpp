#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem058";
	EXTERNAL = "typical90/058";
}

TEST(typical90_problem058, case1) {
	check(string("") + "5 3", string("") + "13");
}

TEST(typical90_problem058, case2) {
	check(string("") + "0 100", string("") + "0");
}

TEST(typical90_problem058, case3) {
	check(string("") + "99999 1000000000000000000", string("") + "84563");
}
