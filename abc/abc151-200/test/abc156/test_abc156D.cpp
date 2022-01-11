#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc156D";

TEST(abc156D, case1) {
	check(PATH + COMMAND, string("") + "4 1 3", string("") + "7");
}

TEST(abc156D, case2) {
	check(PATH + COMMAND, string("") + "1000000000 141421 173205", string("") + "34076506");
}
