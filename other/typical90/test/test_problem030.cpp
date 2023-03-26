#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem030";

TEST(typical90_problem030, case1) {
	check(PATH + COMMAND, string("") + "15 2", string("") + "5");
}

TEST(typical90_problem030, case2) {
	check(PATH + COMMAND, string("") + "30 2", string("") + "13");
}

TEST(typical90_problem030, case3) {
	check(PATH + COMMAND, string("") + "200 4", string("") + "0");
}

TEST(typical90_problem030, case4) {
	check(PATH + COMMAND, string("") + "869120 1", string("") + "869119");
}

TEST(typical90_problem030, case5) {
	check(PATH + COMMAND, string("") + "10000000 3", string("") + "6798027");
}
