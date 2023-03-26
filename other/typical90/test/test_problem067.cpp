#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem067";

TEST(typical90_problem067, case1) {
	check(PATH + COMMAND, string("") + "21 1", string("") + "15");
}

TEST(typical90_problem067, case2) {
	check(PATH + COMMAND, string("") + "1330 1", string("") + "555");
}

TEST(typical90_problem067, case3) {
	check(PATH + COMMAND, string("") + "2311640221315 15", string("") + "474547");
}
