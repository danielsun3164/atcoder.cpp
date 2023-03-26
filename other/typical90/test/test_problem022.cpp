#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem022";

TEST(typical90_problem022, case1) {
	check(PATH + COMMAND, string("") + "2 2 3", string("") + "4");
}

TEST(typical90_problem022, case2) {
	check(PATH + COMMAND, string("") + "2 2 4", string("") + "1");
}

TEST(typical90_problem022, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 999999999999999999 999999999999999998",
			string("") + "2999999999999999994");
}
