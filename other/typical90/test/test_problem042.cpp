#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem042";

TEST(typical90_problem042, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(typical90_problem042, case2) {
	check(PATH + COMMAND, string("") + "234", string("") + "757186539");
}
