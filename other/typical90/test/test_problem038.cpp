#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem038";

TEST(typical90_problem038, case1) {
	check(PATH + COMMAND, string("") + "4 6", string("") + "12");
}

TEST(typical90_problem038, case2) {
	check(PATH + COMMAND, string("") + "1000000000000000000 3", string("") + "Large");
}

TEST(typical90_problem038, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000 1", string("") + "1000000000000000000");
}
