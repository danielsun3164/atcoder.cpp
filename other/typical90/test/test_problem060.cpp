#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem060";
	EXTERNAL = "typical90/060";
}

TEST(typical90_problem060, case1) {
	check(string("") + "6\n" + "1 2 3 3 2 1", string("") + "5");
}

TEST(typical90_problem060, case2) {
	check(string("") + "4\n" + "1 2 3 4", string("") + "4");
}

TEST(typical90_problem060, case3) {
	check(string("") + "5\n" + "3 3 3 3 3", string("") + "1");
}
