#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem034";

TEST(typical90_problem034, case1) {
	check(PATH + COMMAND, string("") + "5 1\n" + "1 2 3 4 5", string("") + "1");
}

TEST(typical90_problem034, case2) {
	check(PATH + COMMAND, string("") + "5 4\n" + "1 1 2 4 2", string("") + "5");
}

TEST(typical90_problem034, case3) {
	check(PATH + COMMAND, string("") + "10 2\n" + "1 2 3 4 4 3 2 1 2 3", string("") + "4");
}
