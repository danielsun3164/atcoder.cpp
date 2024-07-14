#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem022";
	EXTERNAL = "typical90/022";
}

TEST(typical90_problem022, case1) {
	check(string("") + "2 2 3", string("") + "4");
}

TEST(typical90_problem022, case2) {
	check(string("") + "2 2 4", string("") + "1");
}

TEST(typical90_problem022, case3) {
	check(string("") + "1000000000000000000 999999999999999999 999999999999999998",
		  string("") + "2999999999999999994");
}
