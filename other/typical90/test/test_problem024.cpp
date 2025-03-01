#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem024";
	EXTERNAL = "typical90/024";
}

TEST(typical90_problem024, case1) {
	check(string("") + "2 5\n" + "1 3\n" + "2 1", string("") + "Yes");
}

TEST(typical90_problem024, case2) {
	check(string("") + "3 1\n" + "7 8 9\n" + "7 8 9", string("") + "No");
}

TEST(typical90_problem024, case3) {
	check(string("") + "7 999999999\n" + "3 1 4 1 5 9 2\n" + "1 2 3 4 5 6 7", string("") + "Yes");
}
