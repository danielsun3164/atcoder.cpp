#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem082";
	EXTERNAL = "typical90/082";
}

TEST(typical90_problem082, case1) {
	check(string("") + "3 5", string("") + "12");
}

TEST(typical90_problem082, case2) {
	check(string("") + "98 100", string("") + "694");
}

TEST(typical90_problem082, case3) {
	check(string("") + "1001 869120", string("") + "59367733");
}

TEST(typical90_problem082, case4) {
	check(string("") + "381453331666495446 746254773042091083", string("") + "584127830");
}
